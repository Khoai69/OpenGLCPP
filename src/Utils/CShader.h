#pragma once

class Shader
{
public:
	unsigned int ID;
	// constructor generates the shader on the fly
	// ------------------------------------------------------------------------

	Shader(const char* vertexPath, const char* fragmentPath);
	Shader();
	~Shader();
	// activate the shader
	// ------------------------------------------------------------------------
	void Use();
	// utility uniform functions
	// ------------------------------------------------------------------------
	void SetBool(const std::string &name, bool value) const;
	// ------------------------------------------------------------------------
	void SetInt(const std::string &name, int value) const;
	// ------------------------------------------------------------------------
	void SetFloat(const std::string &name, float value) const;

private:
	// utility function for checking shader compilation/linking errors.
	// ------------------------------------------------------------------------
	void CheckCompileErrors(unsigned int shader, std::string type);
};
