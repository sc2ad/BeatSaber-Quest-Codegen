// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NullAllowed
  // [TokenAttribute] Offset: FFFFFFFF
  class NullAllowed : public UnityEngine::PropertyAttribute {
    public:
    // Nested type: GlobalNamespace::NullAllowed::Context
    struct Context;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: NullAllowed/Context
    // [TokenAttribute] Offset: FFFFFFFF
    struct Context/*, public System::Enum*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Context
      constexpr Context(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public NullAllowed/Context Everywhere
      static constexpr const int Everywhere = 0;
      // Get static field: static public NullAllowed/Context Everywhere
      static GlobalNamespace::NullAllowed::Context _get_Everywhere();
      // Set static field: static public NullAllowed/Context Everywhere
      static void _set_Everywhere(GlobalNamespace::NullAllowed::Context value);
      // static field const value: static public NullAllowed/Context Prefab
      static constexpr const int Prefab = 1;
      // Get static field: static public NullAllowed/Context Prefab
      static GlobalNamespace::NullAllowed::Context _get_Prefab();
      // Set static field: static public NullAllowed/Context Prefab
      static void _set_Prefab(GlobalNamespace::NullAllowed::Context value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // NullAllowed/Context
    #pragma pack(pop)
    static check_size<sizeof(NullAllowed::Context), 0 + sizeof(int)> __GlobalNamespace_NullAllowed_ContextSizeCheck;
    static_assert(sizeof(NullAllowed::Context) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public readonly NullAllowed/Context context
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::NullAllowed::Context context;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NullAllowed::Context) == 0x4);
    // Padding between fields: context and: propertyName
    char __padding0[0x4] = {};
    // public readonly System.String propertyName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* propertyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Object ifNotValue
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* ifNotValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: public readonly NullAllowed/Context context
    GlobalNamespace::NullAllowed::Context& dyn_context();
    // Get instance field reference: public readonly System.String propertyName
    ::Il2CppString*& dyn_propertyName();
    // Get instance field reference: public readonly System.Object ifNotValue
    ::Il2CppObject*& dyn_ifNotValue();
    // public System.Void .ctor(NullAllowed/Context context)
    // Offset: 0x262A864
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NullAllowed* New_ctor(GlobalNamespace::NullAllowed::Context context) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NullAllowed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NullAllowed*, creationType>(context)));
    }
    // public System.Void .ctor(System.String propertyName, System.Object ifNotValue)
    // Offset: 0x262A890
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NullAllowed* New_ctor(::Il2CppString* propertyName, ::Il2CppObject* ifNotValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NullAllowed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NullAllowed*, creationType>(propertyName, ifNotValue)));
    }
    // public System.Void .ctor()
    // Offset: 0x262A83C
    // Implemented from: UnityEngine.PropertyAttribute
    // Base method: System.Void PropertyAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NullAllowed* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NullAllowed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NullAllowed*, creationType>()));
    }
  }; // NullAllowed
  #pragma pack(pop)
  static check_size<sizeof(NullAllowed), 32 + sizeof(::Il2CppObject*)> __GlobalNamespace_NullAllowedSizeCheck;
  static_assert(sizeof(NullAllowed) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NullAllowed*, "", "NullAllowed");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NullAllowed::Context, "", "NullAllowed/Context");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NullAllowed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NullAllowed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NullAllowed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
