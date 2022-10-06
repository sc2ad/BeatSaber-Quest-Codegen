// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SignalMissingHandlerResponses
#include "Zenject/SignalMissingHandlerResponses.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalDeclarationBindInfo
  class SignalDeclarationBindInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SignalDeclarationBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalDeclarationBindInfo*, "Zenject", "SignalDeclarationBindInfo");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SignalDeclarationBindInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SignalDeclarationBindInfo : public ::Il2CppObject {
    public:
    public:
    // private System.Object <Identifier>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* Identifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Type <SignalType>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* SignalType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Boolean <RunAsync>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool RunAsync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: RunAsync and: TickPriority
    char __padding2[0x3] = {};
    // private System.Int32 <TickPriority>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int TickPriority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Zenject.SignalMissingHandlerResponses <MissingHandlerResponse>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    ::Zenject::SignalMissingHandlerResponses MissingHandlerResponse;
    // Field size check
    static_assert(sizeof(::Zenject::SignalMissingHandlerResponses) == 0x4);
    public:
    // Get instance field reference: private System.Object <Identifier>k__BackingField
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$Identifier$k__BackingField();
    // Get instance field reference: private System.Type <SignalType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$SignalType$k__BackingField();
    // Get instance field reference: private System.Boolean <RunAsync>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$RunAsync$k__BackingField();
    // Get instance field reference: private System.Int32 <TickPriority>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$TickPriority$k__BackingField();
    // Get instance field reference: private Zenject.SignalMissingHandlerResponses <MissingHandlerResponse>k__BackingField
    [[deprecated("Use field access instead!")]] ::Zenject::SignalMissingHandlerResponses& dyn_$MissingHandlerResponse$k__BackingField();
    // public System.Object get_Identifier()
    // Offset: 0x1D61AA8
    ::Il2CppObject* get_Identifier();
    // public System.Void set_Identifier(System.Object value)
    // Offset: 0x1D61AB0
    void set_Identifier(::Il2CppObject* value);
    // public System.Type get_SignalType()
    // Offset: 0x1D61AB8
    ::System::Type* get_SignalType();
    // private System.Void set_SignalType(System.Type value)
    // Offset: 0x1D61AC0
    void set_SignalType(::System::Type* value);
    // public System.Boolean get_RunAsync()
    // Offset: 0x1D61AC8
    bool get_RunAsync();
    // public System.Void set_RunAsync(System.Boolean value)
    // Offset: 0x1D61AD0
    void set_RunAsync(bool value);
    // public System.Int32 get_TickPriority()
    // Offset: 0x1D61ADC
    int get_TickPriority();
    // public System.Void set_TickPriority(System.Int32 value)
    // Offset: 0x1D61AE4
    void set_TickPriority(int value);
    // public Zenject.SignalMissingHandlerResponses get_MissingHandlerResponse()
    // Offset: 0x1D61AEC
    ::Zenject::SignalMissingHandlerResponses get_MissingHandlerResponse();
    // public System.Void set_MissingHandlerResponse(Zenject.SignalMissingHandlerResponses value)
    // Offset: 0x1D61AF4
    void set_MissingHandlerResponse(::Zenject::SignalMissingHandlerResponses value);
    // public System.Void .ctor(System.Type signalType)
    // Offset: 0x1D61A7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalDeclarationBindInfo* New_ctor(::System::Type* signalType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SignalDeclarationBindInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalDeclarationBindInfo*, creationType>(signalType)));
    }
  }; // Zenject.SignalDeclarationBindInfo
  #pragma pack(pop)
  static check_size<sizeof(SignalDeclarationBindInfo), 40 + sizeof(::Zenject::SignalMissingHandlerResponses)> __Zenject_SignalDeclarationBindInfoSizeCheck;
  static_assert(sizeof(SignalDeclarationBindInfo) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SignalDeclarationBindInfo::get_Identifier
// Il2CppName: get_Identifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Zenject::SignalDeclarationBindInfo::*)()>(&Zenject::SignalDeclarationBindInfo::get_Identifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclarationBindInfo*), "get_Identifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclarationBindInfo::set_Identifier
// Il2CppName: set_Identifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclarationBindInfo::*)(::Il2CppObject*)>(&Zenject::SignalDeclarationBindInfo::set_Identifier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclarationBindInfo*), "set_Identifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclarationBindInfo::get_SignalType
// Il2CppName: get_SignalType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Zenject::SignalDeclarationBindInfo::*)()>(&Zenject::SignalDeclarationBindInfo::get_SignalType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclarationBindInfo*), "get_SignalType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclarationBindInfo::set_SignalType
// Il2CppName: set_SignalType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclarationBindInfo::*)(::System::Type*)>(&Zenject::SignalDeclarationBindInfo::set_SignalType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclarationBindInfo*), "set_SignalType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclarationBindInfo::get_RunAsync
// Il2CppName: get_RunAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SignalDeclarationBindInfo::*)()>(&Zenject::SignalDeclarationBindInfo::get_RunAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclarationBindInfo*), "get_RunAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclarationBindInfo::set_RunAsync
// Il2CppName: set_RunAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclarationBindInfo::*)(bool)>(&Zenject::SignalDeclarationBindInfo::set_RunAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclarationBindInfo*), "set_RunAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclarationBindInfo::get_TickPriority
// Il2CppName: get_TickPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::SignalDeclarationBindInfo::*)()>(&Zenject::SignalDeclarationBindInfo::get_TickPriority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclarationBindInfo*), "get_TickPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclarationBindInfo::set_TickPriority
// Il2CppName: set_TickPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclarationBindInfo::*)(int)>(&Zenject::SignalDeclarationBindInfo::set_TickPriority)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclarationBindInfo*), "set_TickPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclarationBindInfo::get_MissingHandlerResponse
// Il2CppName: get_MissingHandlerResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalMissingHandlerResponses (Zenject::SignalDeclarationBindInfo::*)()>(&Zenject::SignalDeclarationBindInfo::get_MissingHandlerResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclarationBindInfo*), "get_MissingHandlerResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclarationBindInfo::set_MissingHandlerResponse
// Il2CppName: set_MissingHandlerResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclarationBindInfo::*)(::Zenject::SignalMissingHandlerResponses)>(&Zenject::SignalDeclarationBindInfo::set_MissingHandlerResponse)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "SignalMissingHandlerResponses")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclarationBindInfo*), "set_MissingHandlerResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclarationBindInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
