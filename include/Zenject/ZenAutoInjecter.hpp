// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: ContainerSources because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenAutoInjecter
  class ZenAutoInjecter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ZenAutoInjecter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenAutoInjecter*, "Zenject", "ZenAutoInjecter");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenAutoInjecter
  // [TokenAttribute] Offset: FFFFFFFF
  class ZenAutoInjecter : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Zenject::ZenAutoInjecter::ContainerSources
    struct ContainerSources;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Zenject.ZenAutoInjecter/Zenject.ContainerSources
    // [TokenAttribute] Offset: FFFFFFFF
    struct ContainerSources/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ContainerSources
      constexpr ContainerSources(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Zenject.ZenAutoInjecter/Zenject.ContainerSources SceneContext
      static constexpr const int SceneContext = 0;
      // Get static field: static public Zenject.ZenAutoInjecter/Zenject.ContainerSources SceneContext
      static ::Zenject::ZenAutoInjecter::ContainerSources _get_SceneContext();
      // Set static field: static public Zenject.ZenAutoInjecter/Zenject.ContainerSources SceneContext
      static void _set_SceneContext(::Zenject::ZenAutoInjecter::ContainerSources value);
      // static field const value: static public Zenject.ZenAutoInjecter/Zenject.ContainerSources ProjectContext
      static constexpr const int ProjectContext = 1;
      // Get static field: static public Zenject.ZenAutoInjecter/Zenject.ContainerSources ProjectContext
      static ::Zenject::ZenAutoInjecter::ContainerSources _get_ProjectContext();
      // Set static field: static public Zenject.ZenAutoInjecter/Zenject.ContainerSources ProjectContext
      static void _set_ProjectContext(::Zenject::ZenAutoInjecter::ContainerSources value);
      // static field const value: static public Zenject.ZenAutoInjecter/Zenject.ContainerSources SearchHierarchy
      static constexpr const int SearchHierarchy = 2;
      // Get static field: static public Zenject.ZenAutoInjecter/Zenject.ContainerSources SearchHierarchy
      static ::Zenject::ZenAutoInjecter::ContainerSources _get_SearchHierarchy();
      // Set static field: static public Zenject.ZenAutoInjecter/Zenject.ContainerSources SearchHierarchy
      static void _set_SearchHierarchy(::Zenject::ZenAutoInjecter::ContainerSources value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // Zenject.ZenAutoInjecter/Zenject.ContainerSources
    #pragma pack(pop)
    static check_size<sizeof(ZenAutoInjecter::ContainerSources), 0 + sizeof(int)> __Zenject_ZenAutoInjecter_ContainerSourcesSizeCheck;
    static_assert(sizeof(ZenAutoInjecter::ContainerSources) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Zenject.ZenAutoInjecter/Zenject.ContainerSources _containerSource
    // Size: 0x4
    // Offset: 0x18
    ::Zenject::ZenAutoInjecter::ContainerSources containerSource;
    // Field size check
    static_assert(sizeof(::Zenject::ZenAutoInjecter::ContainerSources) == 0x4);
    // private System.Boolean _hasInjected
    // Size: 0x1
    // Offset: 0x1C
    bool hasInjected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Zenject.ZenAutoInjecter/Zenject.ContainerSources _containerSource
    ::Zenject::ZenAutoInjecter::ContainerSources& dyn__containerSource();
    // Get instance field reference: private System.Boolean _hasInjected
    bool& dyn__hasInjected();
    // public Zenject.ZenAutoInjecter/Zenject.ContainerSources get_ContainerSource()
    // Offset: 0x1CEEBE8
    ::Zenject::ZenAutoInjecter::ContainerSources get_ContainerSource();
    // public System.Void set_ContainerSource(Zenject.ZenAutoInjecter/Zenject.ContainerSources value)
    // Offset: 0x1CEEBF0
    void set_ContainerSource(::Zenject::ZenAutoInjecter::ContainerSources value);
    // public System.Void Construct()
    // Offset: 0x1CEEBF8
    void Construct();
    // public System.Void Awake()
    // Offset: 0x1CEEC64
    void Awake();
    // private Zenject.DiContainer LookupContainer()
    // Offset: 0x1CEECB0
    ::Zenject::DiContainer* LookupContainer();
    // private Zenject.DiContainer GetContainerForCurrentScene()
    // Offset: 0x1CEEE00
    ::Zenject::DiContainer* GetContainerForCurrentScene();
    // static private System.Void __zenInjectMethod0(System.Object P_0, System.Object[] P_1)
    // Offset: 0x1CEEEAC
    static void __zenInjectMethod0(::Il2CppObject* P_0, ::ArrayW<::Il2CppObject*> P_1);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CEEF34
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x1CEEE9C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenAutoInjecter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ZenAutoInjecter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenAutoInjecter*, creationType>()));
    }
  }; // Zenject.ZenAutoInjecter
  #pragma pack(pop)
  static check_size<sizeof(ZenAutoInjecter), 28 + sizeof(bool)> __Zenject_ZenAutoInjecterSizeCheck;
  static_assert(sizeof(ZenAutoInjecter) == 0x1D);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenAutoInjecter::ContainerSources, "Zenject", "ZenAutoInjecter/ContainerSources");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::get_ContainerSource
// Il2CppName: get_ContainerSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ZenAutoInjecter::ContainerSources (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::get_ContainerSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "get_ContainerSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::set_ContainerSource
// Il2CppName: set_ContainerSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenAutoInjecter::*)(::Zenject::ZenAutoInjecter::ContainerSources)>(&Zenject::ZenAutoInjecter::set_ContainerSource)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "ZenAutoInjecter/ContainerSources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "set_ContainerSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::Construct)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::LookupContainer
// Il2CppName: LookupContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::LookupContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "LookupContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::GetContainerForCurrentScene
// Il2CppName: GetContainerForCurrentScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::GetContainerForCurrentScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "GetContainerForCurrentScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::__zenInjectMethod0
// Il2CppName: __zenInjectMethod0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::ArrayW<::Il2CppObject*>)>(&Zenject::ZenAutoInjecter::__zenInjectMethod0)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "__zenInjectMethod0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::ZenAutoInjecter::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
