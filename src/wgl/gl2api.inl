/*
 * Copyright (c) 2011, okazoh_tk. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  - Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *  - Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *  - Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

DEF_GLAPI0(void, BindTexture, (GLenum target, GLuint texture))
DEF_GLAPI0(void, BlendFunc, (GLenum sfactor, GLenum dfactor))
DEF_GLAPI0(void, Clear, (GLbitfield mask))
DEF_GLAPI0(void, ClearColor, (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha))
DEF_GLAPI0(void, ClearStencil, (GLint s))
DEF_GLAPI0(void, ColorMask, (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha))
DEF_GLAPI0(void, CopyTexImage2D, (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border))
DEF_GLAPI0(void, CopyTexSubImage2D, (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height))
DEF_GLAPI0(void, CullFace, (GLenum mode))
DEF_GLAPI0(void, DeleteTextures, (GLsizei n, const GLuint *textures))
DEF_GLAPI0(void, DepthFunc, (GLenum func))
DEF_GLAPI0(void, DepthMask, (GLboolean flag))
DEF_GLAPI0(void, Disable, (GLenum cap))
DEF_GLAPI0(void, DrawArrays, (GLenum mode, GLint first, GLsizei count))
DEF_GLAPI0(void, DrawElements, (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices))
DEF_GLAPI0(void, Enable, (GLenum cap))
DEF_GLAPI0(void, Finish, (void))
DEF_GLAPI0(void, Flush, (void))
DEF_GLAPI0(void, FrontFace, (GLenum mode))
DEF_GLAPI0(void, GenTextures, (GLsizei n, GLuint *textures))
DEF_GLAPI0(void, GetBooleanv, (GLenum pname, GLboolean *params))
DEF_GLAPI0(GLenum, GetError, (void))
DEF_GLAPI0(void, GetFloatv, (GLenum pname, GLfloat *params))
DEF_GLAPI0(void, GetIntegerv, (GLenum pname, GLint *params))
DEF_GLAPI0(const GLubyte *, GetString, (GLenum name))
DEF_GLAPI0(void, GetTexParameterfv, (GLenum target, GLenum pname, GLfloat *params))
DEF_GLAPI0(void, GetTexParameteriv, (GLenum target, GLenum pname, GLint *params))
DEF_GLAPI0(void, Hint, (GLenum target, GLenum mode))
DEF_GLAPI0(GLboolean, IsEnabled, (GLenum cap))
DEF_GLAPI0(GLboolean, IsTexture, (GLuint texture))
DEF_GLAPI0(void, LineWidth, (GLfloat width))
DEF_GLAPI0(void, PixelStorei, (GLenum pname, GLint param))
DEF_GLAPI0(void, PolygonOffset, (GLfloat factor, GLfloat units))
DEF_GLAPI0(void, ReadPixels, (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels))
DEF_GLAPI0(void, Scissor, (GLint x, GLint y, GLsizei width, GLsizei height))
DEF_GLAPI0(void, StencilFunc, (GLenum func, GLint ref, GLuint mask))
DEF_GLAPI0(void, StencilMask, (GLuint mask))
DEF_GLAPI0(void, StencilOp, (GLenum fail, GLenum zfail, GLenum zpass))
DEF_GLAPI0(void, TexImage2D, (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels))
DEF_GLAPI0(void, TexParameterf, (GLenum target, GLenum pname, GLfloat param))
DEF_GLAPI0(void, TexParameterfv, (GLenum target, GLenum pname, const GLfloat *params))
DEF_GLAPI0(void, TexParameteri, (GLenum target, GLenum pname, GLint param))
DEF_GLAPI0(void, TexParameteriv, (GLenum target, GLenum pname, const GLint *params))
DEF_GLAPI0(void, TexSubImage2D, (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels))
DEF_GLAPI0(void, Viewport, (GLint x, GLint y, GLsizei width, GLsizei height))

DEF_GLAPI1(void, ActiveTexture, (GLenum texture))
DEF_GLAPI1(void, AttachShader, (GLuint program, GLuint shader))
DEF_GLAPI1(void, BindAttribLocation, (GLuint program, GLuint index, const GLchar *name))
DEF_GLAPI1(void, BindBuffer, (GLenum target, GLuint buffer))
DEF_GLAPI1(void, BindFramebuffer, (GLenum target, GLuint framebuffer))
DEF_GLAPI1(void, BindRenderbuffer, (GLenum target, GLuint renderbuffer))
DEF_GLAPI1(void, BlendColor, (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha))
DEF_GLAPI1(void, BlendEquation, (GLenum mode))
DEF_GLAPI1(void, BlendEquationSeparate, (GLenum modeRGB, GLenum modeAlpha))
DEF_GLAPI1(void, BlendFuncSeparate, (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha))
DEF_GLAPI1(void, BufferData, (GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage))
DEF_GLAPI1(void, BufferSubData, (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data))
DEF_GLAPI1(GLenum, CheckFramebufferStatus, (GLenum target))
DEF_GLAPI1(void, CompileShader, (GLuint shader))
DEF_GLAPI1(void, CompressedTexImage2D, (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data))
DEF_GLAPI1(void, CompressedTexSubImage2D, (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data))
DEF_GLAPI1(GLuint, CreateProgram, (void))
DEF_GLAPI1(GLuint, CreateShader, (GLenum type))
DEF_GLAPI1(void, DeleteBuffers, (GLsizei n, const GLuint *buffers))
DEF_GLAPI1(void, DeleteFramebuffers, (GLsizei n, const GLuint *framebuffers))
DEF_GLAPI1(void, DeleteProgram, (GLuint program))
DEF_GLAPI1(void, DeleteRenderbuffers, (GLsizei n, const GLuint *renderbuffers))
DEF_GLAPI1(void, DeleteShader, (GLuint shader))
DEF_GLAPI1(void, DetachShader, (GLuint program, GLuint shader))
DEF_GLAPI1(void, DisableVertexAttribArray, (GLuint index))
DEF_GLAPI1(void, EnableVertexAttribArray, (GLuint index))
DEF_GLAPI1(void, FramebufferRenderbuffer, (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer))
DEF_GLAPI1(void, FramebufferTexture2D, (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level))
DEF_GLAPI1(void, GenBuffers, (GLsizei n, GLuint *buffers))
DEF_GLAPI1(void, GenerateMipmap, (GLenum target))
DEF_GLAPI1(void, GenFramebuffers, (GLsizei n, GLuint *framebuffers))
DEF_GLAPI1(void, GenRenderbuffers, (GLsizei n, GLuint *renderbuffers))
DEF_GLAPI1(void, GetActiveAttrib, (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name))
DEF_GLAPI1(void, GetActiveUniform, (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name))
DEF_GLAPI1(void, GetAttachedShaders, (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj))
DEF_GLAPI1(GLint, GetAttribLocation, (GLuint program, const GLchar *name))
DEF_GLAPI1(void, GetBufferParameteriv, (GLenum target, GLenum pname, GLint *params))
DEF_GLAPI1(void, GetFramebufferAttachmentParameteriv, (GLenum target, GLenum attachment, GLenum pname, GLint *params))
DEF_GLAPI1(void, GetProgramiv, (GLuint program, GLenum pname, GLint *params))
DEF_GLAPI1(void, GetProgramInfoLog, (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog))
DEF_GLAPI1(void, GetRenderbufferParameteriv, (GLenum target, GLenum pname, GLint *params))
DEF_GLAPI1(void, GetShaderiv, (GLuint shader, GLenum pname, GLint *params))
DEF_GLAPI1(void, GetShaderInfoLog, (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog))
DEF_GLAPI1(void, GetShaderPrecisionFormat, (GLenum shaderType, GLenum precisionType, GLint * range, GLint * precision))
DEF_GLAPI1(void, GetShaderSource, (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source))
DEF_GLAPI1(void, GetUniformfv, (GLuint program, GLint location, GLfloat *params))
DEF_GLAPI1(void, GetUniformiv, (GLuint program, GLint location, GLint *params))
DEF_GLAPI1(GLint, GetUniformLocation, (GLuint program, const GLchar *name))
DEF_GLAPI1(void, GetVertexAttribfv, (GLuint index, GLenum pname, GLfloat *params))
DEF_GLAPI1(void, GetVertexAttribiv, (GLuint index, GLenum pname, GLint *params))
DEF_GLAPI1(void, GetVertexAttribPointerv, (GLuint index, GLenum pname, GLvoid* *pointer))
DEF_GLAPI1(GLboolean, IsBuffer, (GLuint buffer))
DEF_GLAPI1(GLboolean, IsFramebuffer, (GLuint framebuffer))
DEF_GLAPI1(GLboolean, IsProgram, (GLuint program))
DEF_GLAPI1(GLboolean, IsRenderbuffer, (GLuint renderbuffer))
DEF_GLAPI1(GLboolean, IsShader, (GLuint shader))
DEF_GLAPI1(void, LinkProgram, (GLuint program))
DEF_GLAPI1(void, ReleaseShaderCompiler, (void))
DEF_GLAPI1(void, RenderbufferStorage, (GLenum target, GLenum internalformat, GLsizei width, GLsizei height))
DEF_GLAPI1(void, SampleCoverage, (GLclampf value, GLboolean invert))
DEF_GLAPI1(void, ShaderBinary, (GLsizei count, const GLuint * shaders, GLenum binaryFormat, const void * binary, GLsizei length))
DEF_GLAPI1(void, ShaderSource, (GLuint shader, GLsizei count, const GLchar* *string, const GLint *length))
DEF_GLAPI1(void, StencilFuncSeparate, (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask))
DEF_GLAPI1(void, StencilMaskSeparate, (GLenum face, GLuint mask))
DEF_GLAPI1(void, StencilOpSeparate, (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass))
DEF_GLAPI1(void, Uniform1f, (GLint location, GLfloat v0))
DEF_GLAPI1(void, Uniform1fv, (GLint location, GLsizei count, const GLfloat *value))
DEF_GLAPI1(void, Uniform1i, (GLint location, GLint v0))
DEF_GLAPI1(void, Uniform1iv, (GLint location, GLsizei count, const GLint *value))
DEF_GLAPI1(void, Uniform2f, (GLint location, GLfloat v0, GLfloat v1))
DEF_GLAPI1(void, Uniform2fv, (GLint location, GLsizei count, const GLfloat *value))
DEF_GLAPI1(void, Uniform2i, (GLint location, GLint v0, GLint v1))
DEF_GLAPI1(void, Uniform2iv, (GLint location, GLsizei count, const GLint *value))
DEF_GLAPI1(void, Uniform3f, (GLint location, GLfloat v0, GLfloat v1, GLfloat v2))
DEF_GLAPI1(void, Uniform3fv, (GLint location, GLsizei count, const GLfloat *value))
DEF_GLAPI1(void, Uniform3i, (GLint location, GLint v0, GLint v1, GLint v2))
DEF_GLAPI1(void, Uniform3iv, (GLint location, GLsizei count, const GLint *value))
DEF_GLAPI1(void, Uniform4f, (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3))
DEF_GLAPI1(void, Uniform4fv, (GLint location, GLsizei count, const GLfloat *value))
DEF_GLAPI1(void, Uniform4i, (GLint location, GLint v0, GLint v1, GLint v2, GLint v3))
DEF_GLAPI1(void, Uniform4iv, (GLint location, GLsizei count, const GLint *value))
DEF_GLAPI1(void, UniformMatrix2fv, (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value))
DEF_GLAPI1(void, UniformMatrix3fv, (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value))
DEF_GLAPI1(void, UniformMatrix4fv, (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value))
DEF_GLAPI1(void, UseProgram, (GLuint program))
DEF_GLAPI1(void, ValidateProgram, (GLuint program))
DEF_GLAPI1(void, VertexAttrib1f, (GLuint index, GLfloat x))
DEF_GLAPI1(void, VertexAttrib1fv, (GLuint index, const GLfloat *v))
DEF_GLAPI1(void, VertexAttrib2f, (GLuint index, GLfloat x, GLfloat y))
DEF_GLAPI1(void, VertexAttrib2fv, (GLuint index, const GLfloat *v))
DEF_GLAPI1(void, VertexAttrib3f, (GLuint index, GLfloat x, GLfloat y, GLfloat z))
DEF_GLAPI1(void, VertexAttrib3fv, (GLuint index, const GLfloat *v))
DEF_GLAPI1(void, VertexAttrib4f, (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w))
DEF_GLAPI1(void, VertexAttrib4fv, (GLuint index, const GLfloat *v))
DEF_GLAPI1(void, VertexAttribPointer, (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer))

DEF_GLAPI2(void, ClearDepthf, (GLfloat depth))
DEF_GLAPI2(void, DepthRangef, (GLfloat zNear, GLfloat zFar))