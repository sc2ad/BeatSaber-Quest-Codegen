// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher
#include "Org/BouncyCastle/Crypto/Paddings/PaddedBufferedBlockCipher.hpp"
// Including type: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
#include "Org/BouncyCastle/Crypto/Paddings/IBlockCipherPadding.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher..ctor
Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher* Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding) {
  return THROW_UNLESS(il2cpp_utils::New<PaddedBufferedBlockCipher*>(cipher, padding));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher..ctor
Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher* Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  return THROW_UNLESS(il2cpp_utils::New<PaddedBufferedBlockCipher*>(cipher));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher.Init
void Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", forEncryption, parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher.GetOutputSize
int Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::GetOutputSize(int length) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetOutputSize", length));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher.GetUpdateOutputSize
int Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::GetUpdateOutputSize(int length) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetUpdateOutputSize", length));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher.ProcessBytes
int Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::ProcessBytes(::Array<uint8_t>* input, int inOff, int length, ::Array<uint8_t>* output, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "ProcessBytes", input, inOff, length, output, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher.DoFinal
int Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::DoFinal(::Array<uint8_t>* output, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "DoFinal", output, outOff));
}