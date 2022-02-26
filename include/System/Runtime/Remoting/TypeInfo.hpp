// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.IRemotingTypeInfo
#include "System/Runtime/Remoting/IRemotingTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: TypeInfo
  class TypeInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::TypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::TypeInfo*, "System.Runtime.Remoting", "TypeInfo");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.TypeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeInfo : public ::Il2CppObject/*, public ::System::Runtime::Remoting::IRemotingTypeInfo*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String serverType
    // Size: 0x8
    // Offset: 0x10
    ::StringW serverType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String[] serverHierarchy
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> serverHierarchy;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.String[] interfacesImplemented
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::StringW> interfacesImplemented;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::IRemotingTypeInfo
    operator ::System::Runtime::Remoting::IRemotingTypeInfo() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::IRemotingTypeInfo*>(this);
    }
    // Get instance field reference: private System.String serverType
    ::StringW& dyn_serverType();
    // Get instance field reference: private System.String[] serverHierarchy
    ::ArrayW<::StringW>& dyn_serverHierarchy();
    // Get instance field reference: private System.String[] interfacesImplemented
    ::ArrayW<::StringW>& dyn_interfacesImplemented();
    // public System.String get_TypeName()
    // Offset: 0x180BC10
    ::StringW get_TypeName();
    // public System.Void .ctor(System.Type type)
    // Offset: 0x1809C08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeInfo* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::TypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeInfo*, creationType>(type)));
    }
    // public System.Boolean CanCastTo(System.Type fromType, System.Object o)
    // Offset: 0x180BC18
    bool CanCastTo(::System::Type* fromType, ::Il2CppObject* o);
  }; // System.Runtime.Remoting.TypeInfo
  #pragma pack(pop)
  static check_size<sizeof(TypeInfo), 32 + sizeof(::ArrayW<::StringW>)> __System_Runtime_Remoting_TypeInfoSizeCheck;
  static_assert(sizeof(TypeInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::TypeInfo::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::TypeInfo::*)()>(&System::Runtime::Remoting::TypeInfo::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::TypeInfo*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::TypeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::TypeInfo::CanCastTo
// Il2CppName: CanCastTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::TypeInfo::*)(::System::Type*, ::Il2CppObject*)>(&System::Runtime::Remoting::TypeInfo::CanCastTo)> {
  static const MethodInfo* get() {
    static auto* fromType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::TypeInfo*), "CanCastTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromType, o});
  }
};
