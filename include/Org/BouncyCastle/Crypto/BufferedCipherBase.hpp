// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBufferedCipher
#include "Org/BouncyCastle/Crypto/IBufferedCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: BufferedCipherBase
  class BufferedCipherBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::BufferedCipherBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::BufferedCipherBase*, "Org.BouncyCastle.Crypto", "BufferedCipherBase");
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.BufferedCipherBase
  // [TokenAttribute] Offset: FFFFFFFF
  class BufferedCipherBase : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IBufferedCipher*/ {
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IBufferedCipher
    operator ::Org::BouncyCastle::Crypto::IBufferedCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IBufferedCipher*>(this);
    }
    // Creating interface conversion operator: i_IBufferedCipher
    inline ::Org::BouncyCastle::Crypto::IBufferedCipher* i_IBufferedCipher() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IBufferedCipher*>(this);
    }
    // Get static field: static protected readonly System.Byte[] EmptyBuffer
    static ::ArrayW<uint8_t> _get_EmptyBuffer();
    // Set static field: static protected readonly System.Byte[] EmptyBuffer
    static void _set_EmptyBuffer(::ArrayW<uint8_t> value);
    // static private System.Void .cctor()
    // Offset: 0x23134AC
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x2313510
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferedCipherBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::BufferedCipherBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferedCipherBase*, creationType>()));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetBlockSize();
    // public System.Int32 GetOutputSize(System.Int32 inputLen)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetOutputSize(int inputLen);
    // public System.Int32 GetUpdateOutputSize(System.Int32 inputLen)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetUpdateOutputSize(int inputLen);
    // public System.Byte[] ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input, int inOff, int length);
    // public System.Int32 ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x23132B0
    int ProcessBytes(::ArrayW<uint8_t> input, int inOff, int length, ::ArrayW<uint8_t> output, int outOff);
    // public System.Byte[] DoFinal()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<uint8_t> DoFinal();
    // public System.Byte[] DoFinal(System.Byte[] input)
    // Offset: 0x23133B0
    ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input);
    // public System.Byte[] DoFinal(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input, int inOff, int length);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x23133D8
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Reset();
  }; // Org.BouncyCastle.Crypto.BufferedCipherBase
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedCipherBase::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::BufferedCipherBase::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedCipherBase*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedCipherBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedCipherBase::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::BufferedCipherBase::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::BufferedCipherBase::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedCipherBase*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedCipherBase::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedCipherBase::*)()>(&Org::BouncyCastle::Crypto::BufferedCipherBase::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedCipherBase*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedCipherBase::GetOutputSize
// Il2CppName: GetOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedCipherBase::*)(int)>(&Org::BouncyCastle::Crypto::BufferedCipherBase::GetOutputSize)> {
  static const MethodInfo* get() {
    static auto* inputLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedCipherBase*), "GetOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedCipherBase::GetUpdateOutputSize
// Il2CppName: GetUpdateOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedCipherBase::*)(int)>(&Org::BouncyCastle::Crypto::BufferedCipherBase::GetUpdateOutputSize)> {
  static const MethodInfo* get() {
    static auto* inputLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedCipherBase*), "GetUpdateOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedCipherBase::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::BufferedCipherBase::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::BufferedCipherBase::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedCipherBase*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedCipherBase::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedCipherBase::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::BufferedCipherBase::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedCipherBase*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedCipherBase::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::BufferedCipherBase::*)()>(&Org::BouncyCastle::Crypto::BufferedCipherBase::DoFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedCipherBase*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedCipherBase::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::BufferedCipherBase::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::BufferedCipherBase::DoFinal)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedCipherBase*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedCipherBase::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::BufferedCipherBase::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::BufferedCipherBase::DoFinal)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedCipherBase*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedCipherBase::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedCipherBase::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::BufferedCipherBase::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedCipherBase*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedCipherBase::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::BufferedCipherBase::*)()>(&Org::BouncyCastle::Crypto::BufferedCipherBase::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedCipherBase*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
