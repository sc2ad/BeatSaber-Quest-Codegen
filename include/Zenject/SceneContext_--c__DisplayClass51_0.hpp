// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SceneContext
#include "Zenject/SceneContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SceneContext::$$c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneContext::$$c__DisplayClass51_0*, "Zenject", "SceneContext/<>c__DisplayClass51_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SceneContext/Zenject.<>c__DisplayClass51_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SceneContext::$$c__DisplayClass51_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> parents
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*
    constexpr operator ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*() const noexcept {
      return parents;
    }
    // Get instance field reference: public System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> parents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*& dyn_parents();
    // public System.Void .ctor()
    // Offset: 0x1C4BFC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneContext::$$c__DisplayClass51_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SceneContext::$$c__DisplayClass51_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneContext::$$c__DisplayClass51_0*, creationType>()));
    }
    // System.Boolean <Install>b__0(Zenject.DiContainer x)
    // Offset: 0x1C4CEFC
    bool $Install$b__0(::Zenject::DiContainer* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1C4CF84
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1C4CFE0
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SceneContext/Zenject.<>c__DisplayClass51_0
  #pragma pack(pop)
  static check_size<sizeof(SceneContext::$$c__DisplayClass51_0), 16 + sizeof(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*)> __Zenject_SceneContext_$$c__DisplayClass51_0SizeCheck;
  static_assert(sizeof(SceneContext::$$c__DisplayClass51_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SceneContext::$$c__DisplayClass51_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SceneContext::$$c__DisplayClass51_0::$Install$b__0
// Il2CppName: <Install>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SceneContext::$$c__DisplayClass51_0::*)(::Zenject::DiContainer*)>(&Zenject::SceneContext::$$c__DisplayClass51_0::$Install$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c__DisplayClass51_0*), "<Install>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c__DisplayClass51_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SceneContext::$$c__DisplayClass51_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c__DisplayClass51_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c__DisplayClass51_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SceneContext::$$c__DisplayClass51_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c__DisplayClass51_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
