// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: GeneratorUtilities
  class GeneratorUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Security::GeneratorUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::GeneratorUtilities*, "Org.BouncyCastle.Security", "GeneratorUtilities");
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.GeneratorUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class GeneratorUtilities : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Collections.IDictionary kgAlgorithms
    static ::System::Collections::IDictionary* _get_kgAlgorithms();
    // Set static field: static private readonly System.Collections.IDictionary kgAlgorithms
    static void _set_kgAlgorithms(::System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary kpgAlgorithms
    static ::System::Collections::IDictionary* _get_kpgAlgorithms();
    // Set static field: static private readonly System.Collections.IDictionary kpgAlgorithms
    static void _set_kpgAlgorithms(::System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary defaultKeySizes
    static ::System::Collections::IDictionary* _get_defaultKeySizes();
    // Set static field: static private readonly System.Collections.IDictionary defaultKeySizes
    static void _set_defaultKeySizes(::System::Collections::IDictionary* value);
    // static private System.Void .cctor()
    // Offset: 0x183FC30
    static void _cctor();
    // static private System.Void AddDefaultKeySizeEntries(System.Int32 size, params System.String[] algorithms)
    // Offset: 0x1843130
    static void AddDefaultKeySizeEntries(int size, ::ArrayW<::StringW> algorithms);
    // static private System.Void AddKgAlgorithm(System.String canonicalName, params System.Object[] aliases)
    // Offset: 0x184291C
    static void AddKgAlgorithm(::StringW canonicalName, ::ArrayW<::Il2CppObject*> aliases);
    // static private System.Void AddKpgAlgorithm(System.String canonicalName, params System.Object[] aliases)
    // Offset: 0x1842EE0
    static void AddKpgAlgorithm(::StringW canonicalName, ::ArrayW<::Il2CppObject*> aliases);
    // static private System.Void AddHMacKeyGenerator(System.String algorithm, params System.Object[] aliases)
    // Offset: 0x1842B6C
    static void AddHMacKeyGenerator(::StringW algorithm, ::ArrayW<::Il2CppObject*> aliases);
    // static System.String GetCanonicalKeyGeneratorAlgorithm(System.String algorithm)
    // Offset: 0x184329C
    static ::StringW GetCanonicalKeyGeneratorAlgorithm(::StringW algorithm);
    // static System.Int32 GetDefaultKeySize(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x18433D0
    static int GetDefaultKeySize(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // static System.Int32 GetDefaultKeySize(System.String algorithm)
    // Offset: 0x1843440
    static int GetDefaultKeySize(::StringW algorithm);
    // static private System.Int32 FindDefaultKeySize(System.String canonicalName)
    // Offset: 0x184362C
    static int FindDefaultKeySize(::StringW canonicalName);
  }; // Org.BouncyCastle.Security.GeneratorUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::GeneratorUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Security::GeneratorUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::GeneratorUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::GeneratorUtilities::AddDefaultKeySizeEntries
// Il2CppName: AddDefaultKeySizeEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<::StringW>)>(&Org::BouncyCastle::Security::GeneratorUtilities::AddDefaultKeySizeEntries)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* algorithms = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::GeneratorUtilities*), "AddDefaultKeySizeEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size, algorithms});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::GeneratorUtilities::AddKgAlgorithm
// Il2CppName: AddKgAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&Org::BouncyCastle::Security::GeneratorUtilities::AddKgAlgorithm)> {
  static const MethodInfo* get() {
    static auto* canonicalName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* aliases = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::GeneratorUtilities*), "AddKgAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canonicalName, aliases});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::GeneratorUtilities::AddKpgAlgorithm
// Il2CppName: AddKpgAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&Org::BouncyCastle::Security::GeneratorUtilities::AddKpgAlgorithm)> {
  static const MethodInfo* get() {
    static auto* canonicalName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* aliases = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::GeneratorUtilities*), "AddKpgAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canonicalName, aliases});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::GeneratorUtilities::AddHMacKeyGenerator
// Il2CppName: AddHMacKeyGenerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&Org::BouncyCastle::Security::GeneratorUtilities::AddHMacKeyGenerator)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* aliases = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::GeneratorUtilities*), "AddHMacKeyGenerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm, aliases});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::GeneratorUtilities::GetCanonicalKeyGeneratorAlgorithm
// Il2CppName: GetCanonicalKeyGeneratorAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&Org::BouncyCastle::Security::GeneratorUtilities::GetCanonicalKeyGeneratorAlgorithm)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::GeneratorUtilities*), "GetCanonicalKeyGeneratorAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::GeneratorUtilities::GetDefaultKeySize
// Il2CppName: GetDefaultKeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Security::GeneratorUtilities::GetDefaultKeySize)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::GeneratorUtilities*), "GetDefaultKeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::GeneratorUtilities::GetDefaultKeySize
// Il2CppName: GetDefaultKeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&Org::BouncyCastle::Security::GeneratorUtilities::GetDefaultKeySize)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::GeneratorUtilities*), "GetDefaultKeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::GeneratorUtilities::FindDefaultKeySize
// Il2CppName: FindDefaultKeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&Org::BouncyCastle::Security::GeneratorUtilities::FindDefaultKeySize)> {
  static const MethodInfo* get() {
    static auto* canonicalName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::GeneratorUtilities*), "FindDefaultKeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canonicalName});
  }
};
