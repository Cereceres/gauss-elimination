

{
  "targets": [
    {
      "target_name": "gauss",
      "sources": [
        "gauss.cc"
      ], 'cflags': [''],
      "include_dirs": ["<!(node -e \"require('nan')\")"],
      "libraries": ["-L/usr/local/lib"]
    }
  ]
}
