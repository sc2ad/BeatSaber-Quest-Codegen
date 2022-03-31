// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEqualityComparer`1
#include "System/Collections/Generic/IEqualityComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: SecureStringHasher
  class SecureStringHasher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::SecureStringHasher);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::SecureStringHasher*, "System.Xml", "SecureStringHasher");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.SecureStringHasher
  // [TokenAttribute] Offset: FFFFFFFF
  class SecureStringHasher : public ::Il2CppObject/*, public ::System::Collections::Generic::IEqualityComparer_1<::StringW>*/ {
    public:
    // Nested type: ::System::Xml::SecureStringHasher::HashCodeOfStringDelegate
    class HashCodeOfStringDelegate;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Int32 hashCodeRandomizer
    // Size: 0x4
    // Offset: 0x10
    int hashCodeRandomizer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEqualityComparer_1<::StringW>
    operator ::System::Collections::Generic::IEqualityComparer_1<::StringW>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEqualityComparer_1<::StringW>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return hashCodeRandomizer;
    }
    // Get static field: static private System.Xml.SecureStringHasher/System.Xml.HashCodeOfStringDelegate hashCodeDelegate
    static ::System::Xml::SecureStringHasher::HashCodeOfStringDelegate* _get_hashCodeDelegate();
    // Set static field: static private System.Xml.SecureStringHasher/System.Xml.HashCodeOfStringDelegate hashCodeDelegate
    static void _set_hashCodeDelegate(::System::Xml::SecureStringHasher::HashCodeOfStringDelegate* value);
    // Get instance field reference: private System.Int32 hashCodeRandomizer
    int& dyn_hashCodeRandomizer();
    // public System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x201D7FC
    bool Equals(::StringW x, ::StringW y);
    // public System.Int32 GetHashCode(System.String key)
    // Offset: 0x201D814
    int GetHashCode(::StringW key);
    // static private System.Int32 GetHashCodeOfString(System.String key, System.Int32 sLen, System.Int64 additionalEntropy)
    // Offset: 0x201DE14
    static int GetHashCodeOfString(::StringW key, int sLen, int64_t additionalEntropy);
    // static private System.Xml.SecureStringHasher/System.Xml.HashCodeOfStringDelegate GetHashCodeDelegate()
    // Offset: 0x201D8AC
    static ::System::Xml::SecureStringHasher::HashCodeOfStringDelegate* GetHashCodeDelegate();
    // public System.Void .ctor()
    // Offset: 0x201D7CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureStringHasher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::SecureStringHasher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureStringHasher*, creationType>()));
    }
  }; // System.Xml.SecureStringHasher
  #pragma pack(pop)
  static check_size<sizeof(SecureStringHasher), 16 + sizeof(int)> __System_Xml_SecureStringHasherSizeCheck;
  static_assert(sizeof(SecureStringHasher) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::SecureStringHasher::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::SecureStringHasher::*)(::StringW, ::StringW)>(&System::Xml::SecureStringHasher::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::SecureStringHasher*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Xml::SecureStringHasher::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::SecureStringHasher::*)(::StringW)>(&System::Xml::SecureStringHasher::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::SecureStringHasher*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Xml::SecureStringHasher::GetHashCodeOfString
// Il2CppName: GetHashCodeOfString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int, int64_t)>(&System::Xml::SecureStringHasher::GetHashCodeOfString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* additionalEntropy = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::SecureStringHasher*), "GetHashCodeOfString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, sLen, additionalEntropy});
  }
};
// Writing MetadataGetter for method: System::Xml::SecureStringHasher::GetHashCodeDelegate
// Il2CppName: GetHashCodeDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::SecureStringHasher::HashCodeOfStringDelegate* (*)()>(&System::Xml::SecureStringHasher::GetHashCodeDelegate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::SecureStringHasher*), "GetHashCodeDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::SecureStringHasher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
