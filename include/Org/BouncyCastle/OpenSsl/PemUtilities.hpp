// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::OpenSsl
namespace Org::BouncyCastle::OpenSsl {
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.OpenSsl
namespace Org::BouncyCastle::OpenSsl {
  // Forward declaring type: PemUtilities
  class PemUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::PemUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::PemUtilities*, "Org.BouncyCastle.OpenSsl", "PemUtilities");
// Type namespace: Org.BouncyCastle.OpenSsl
namespace Org::BouncyCastle::OpenSsl {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.OpenSsl.PemUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class PemUtilities : public ::Il2CppObject {
    public:
    // Nested type: ::Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg
    struct PemBaseAlg;
    // Nested type: ::Org::BouncyCastle::OpenSsl::PemUtilities::PemMode
    struct PemMode;
    // static private System.Void .cctor()
    // Offset: 0x17FE538
    static void _cctor();
    // static private System.Void ParseDekAlgName(System.String dekAlgName, out Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemBaseAlg baseAlg, out Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode mode)
    // Offset: 0x17FE668
    static void ParseDekAlgName(::StringW dekAlgName, ByRef<::Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg> baseAlg, ByRef<::Org::BouncyCastle::OpenSsl::PemUtilities::PemMode> mode);
    // static System.Byte[] Crypt(System.Boolean encrypt, System.Byte[] bytes, System.Char[] password, System.String dekAlgName, System.Byte[] iv)
    // Offset: 0x17FE0A8
    static ::ArrayW<uint8_t> Crypt(bool encrypt, ::ArrayW<uint8_t> bytes, ::ArrayW<::Il2CppChar> password, ::StringW dekAlgName, ::ArrayW<uint8_t> iv);
    // static private Org.BouncyCastle.Crypto.ICipherParameters GetCipherParameters(System.Char[] password, Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemBaseAlg baseAlg, System.Byte[] salt)
    // Offset: 0x180056C
    static ::Org::BouncyCastle::Crypto::ICipherParameters* GetCipherParameters(::ArrayW<::Il2CppChar> password, ::Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg baseAlg, ::ArrayW<uint8_t> salt);
  }; // Org.BouncyCastle.OpenSsl.PemUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::OpenSsl::PemUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::OpenSsl::PemUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::OpenSsl::PemUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::OpenSsl::PemUtilities::ParseDekAlgName
// Il2CppName: ParseDekAlgName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg>, ByRef<::Org::BouncyCastle::OpenSsl::PemUtilities::PemMode>)>(&Org::BouncyCastle::OpenSsl::PemUtilities::ParseDekAlgName)> {
  static const MethodInfo* get() {
    static auto* dekAlgName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* baseAlg = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.OpenSsl", "PemUtilities/PemBaseAlg")->this_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.OpenSsl", "PemUtilities/PemMode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::OpenSsl::PemUtilities*), "ParseDekAlgName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dekAlgName, baseAlg, mode});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::OpenSsl::PemUtilities::Crypt
// Il2CppName: Crypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(bool, ::ArrayW<uint8_t>, ::ArrayW<::Il2CppChar>, ::StringW, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::OpenSsl::PemUtilities::Crypt)> {
  static const MethodInfo* get() {
    static auto* encrypt = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* password = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* dekAlgName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* iv = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::OpenSsl::PemUtilities*), "Crypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encrypt, bytes, password, dekAlgName, iv});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::OpenSsl::PemUtilities::GetCipherParameters
// Il2CppName: GetCipherParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::ArrayW<::Il2CppChar>, ::Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::OpenSsl::PemUtilities::GetCipherParameters)> {
  static const MethodInfo* get() {
    static auto* password = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* baseAlg = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.OpenSsl", "PemUtilities/PemBaseAlg")->byval_arg;
    static auto* salt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::OpenSsl::PemUtilities*), "GetCipherParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password, baseAlg, salt});
  }
};
