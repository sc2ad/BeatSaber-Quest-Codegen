// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/Zenject.<>c__DisplayClass53_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FromBinder::$$c__DisplayClass53_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public UnityEngine.ScriptableObject resource
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ScriptableObject* resource;
    // Field size check
    static_assert(sizeof(UnityEngine::ScriptableObject*) == 0x8);
    // public Zenject.FromBinder <>4__this
    // Size: 0x8
    // Offset: 0x18
    Zenject::FromBinder* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::FromBinder*) == 0x8);
    // public System.Boolean createNew
    // Size: 0x1
    // Offset: 0x20
    bool createNew;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.ScriptableObject resource
    UnityEngine::ScriptableObject*& dyn_resource();
    // Get instance field reference: public Zenject.FromBinder <>4__this
    Zenject::FromBinder*& dyn_$$4__this();
    // Get instance field reference: public System.Boolean createNew
    bool& dyn_createNew();
    // Zenject.IProvider <FromScriptableObjectInternal>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x182E21C
    Zenject::IProvider* $FromScriptableObjectInternal$b__0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x182C750
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass53_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass53_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass53_0*, creationType>()));
    }
  }; // Zenject.FromBinder/Zenject.<>c__DisplayClass53_0
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass53_0), 32 + sizeof(bool)> __Zenject_FromBinder_$$c__DisplayClass53_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass53_0) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass53_0*, "Zenject", "FromBinder/<>c__DisplayClass53_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass53_0::$FromScriptableObjectInternal$b__0
// Il2CppName: <FromScriptableObjectInternal>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::FromBinder::$$c__DisplayClass53_0::*)(Zenject::DiContainer*, System::Type*)>(&Zenject::FromBinder::$$c__DisplayClass53_0::$FromScriptableObjectInternal$b__0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass53_0*), "<FromScriptableObjectInternal>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, type});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass53_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
