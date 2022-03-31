// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: IMac
  class IMac;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IMac*, "Org.BouncyCastle.Crypto", "IMac");
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.IMac
  // [TokenAttribute] Offset: FFFFFFFF
  class IMac {
    public:
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetMacSize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetMacSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void BlockUpdate(::ArrayW<uint8_t> input, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Reset();
  }; // Org.BouncyCastle.Crypto.IMac
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IMac::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::IMac::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::IMac::Init)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::IMac*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IMac::GetMacSize
// Il2CppName: GetMacSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::IMac::*)()>(&Org::BouncyCastle::Crypto::IMac::GetMacSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::IMac*), "GetMacSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IMac::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::IMac::*)(uint8_t)>(&Org::BouncyCastle::Crypto::IMac::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::IMac*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IMac::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::IMac::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::IMac::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::IMac*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IMac::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::IMac::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::IMac::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::IMac*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IMac::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::IMac::*)()>(&Org::BouncyCastle::Crypto::IMac::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::IMac*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
