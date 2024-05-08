import zipfile
import os
import requests

def zip_files(source_dir, output_filename, file_extension):
    """Zip files in a directory with a specific extension."""
    with zipfile.ZipFile(output_filename, 'w', zipfile.ZIP_DEFLATED) as zipf:
        for root, dirs, files in os.walk(source_dir):
            for file in files:
                if file.endswith(file_extension):
                    zipf.write(os.path.join(root, file),
                             os.path.relpath(os.path.join(root, file), source_dir))

def upload_release_asset(token, repo, tag_name, asset_path):
    """Upload a release asset to a specific release based on tag name."""
    # Get release ID from tag name
    release_url = f"https://api.github.com/repos/{repo}/releases/tags/{tag_name}"
    headers = {'Authorization': f'token {token}'}
    response = requests.get(release_url, headers=headers)
    release_id = response.json()['id']

    # Upload asset
    upload_url = f"https://uploads.github.com/repos/{repo}/releases/{release_id}/assets?name={os.path.basename(asset_path)}"
    headers.update({'Content-Type': 'application/octet-stream'})
    with open(asset_path, 'rb') as f:
        data = f.read()
    response = requests.post(upload_url, headers=headers, data=data)
    return response.json()

# Main execution
if __name__ == '__main__':
    import sys
    token = sys.argv[1]  # GitHub Token
    repo = sys.argv[2]   # Repository name, e.g., 'username/repo'
    tag_name = sys.argv[3]  # Tag name from the release

    source_directory = 'data/'
    output_file = 'data_package.zip'
    file_extension = '.dll'

    zip_files(source_directory, output_file, file_extension)
    result = upload_release_asset(token, repo, tag_name, output_file)
    print(result)
