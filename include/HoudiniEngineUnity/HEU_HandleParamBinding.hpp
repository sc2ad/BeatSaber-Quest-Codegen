// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_HandleParamBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_HandleParamBinding : public ::Il2CppObject/*, public HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_HandleParamBinding*>*/ {
    public:
    // Nested type: HoudiniEngineUnity::HEU_HandleParamBinding::HEU_HandleParamType
    struct HEU_HandleParamType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HoudiniEngineUnity.HEU_HandleParamBinding/HoudiniEngineUnity.HEU_HandleParamType
    // [TokenAttribute] Offset: FFFFFFFF
    struct HEU_HandleParamType/*, public System::Enum*/ {
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
      // Creating value type constructor for type: HEU_HandleParamType
      constexpr HEU_HandleParamType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HoudiniEngineUnity.HEU_HandleParamBinding/HoudiniEngineUnity.HEU_HandleParamType TRANSLATE
      static constexpr const int TRANSLATE = 0;
      // Get static field: static public HoudiniEngineUnity.HEU_HandleParamBinding/HoudiniEngineUnity.HEU_HandleParamType TRANSLATE
      static HoudiniEngineUnity::HEU_HandleParamBinding::HEU_HandleParamType _get_TRANSLATE();
      // Set static field: static public HoudiniEngineUnity.HEU_HandleParamBinding/HoudiniEngineUnity.HEU_HandleParamType TRANSLATE
      static void _set_TRANSLATE(HoudiniEngineUnity::HEU_HandleParamBinding::HEU_HandleParamType value);
      // static field const value: static public HoudiniEngineUnity.HEU_HandleParamBinding/HoudiniEngineUnity.HEU_HandleParamType ROTATE
      static constexpr const int ROTATE = 1;
      // Get static field: static public HoudiniEngineUnity.HEU_HandleParamBinding/HoudiniEngineUnity.HEU_HandleParamType ROTATE
      static HoudiniEngineUnity::HEU_HandleParamBinding::HEU_HandleParamType _get_ROTATE();
      // Set static field: static public HoudiniEngineUnity.HEU_HandleParamBinding/HoudiniEngineUnity.HEU_HandleParamType ROTATE
      static void _set_ROTATE(HoudiniEngineUnity::HEU_HandleParamBinding::HEU_HandleParamType value);
      // static field const value: static public HoudiniEngineUnity.HEU_HandleParamBinding/HoudiniEngineUnity.HEU_HandleParamType SCALE
      static constexpr const int SCALE = 2;
      // Get static field: static public HoudiniEngineUnity.HEU_HandleParamBinding/HoudiniEngineUnity.HEU_HandleParamType SCALE
      static HoudiniEngineUnity::HEU_HandleParamBinding::HEU_HandleParamType _get_SCALE();
      // Set static field: static public HoudiniEngineUnity.HEU_HandleParamBinding/HoudiniEngineUnity.HEU_HandleParamType SCALE
      static void _set_SCALE(HoudiniEngineUnity::HEU_HandleParamBinding::HEU_HandleParamType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // HoudiniEngineUnity.HEU_HandleParamBinding/HoudiniEngineUnity.HEU_HandleParamType
    #pragma pack(pop)
    static check_size<sizeof(HEU_HandleParamBinding::HEU_HandleParamType), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_HandleParamBinding_HEU_HandleParamTypeSizeCheck;
    static_assert(sizeof(HEU_HandleParamBinding::HEU_HandleParamType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public HoudiniEngineUnity.HEU_HandleParamBinding/HoudiniEngineUnity.HEU_HandleParamType _paramType
    // Size: 0x4
    // Offset: 0x10
    HoudiniEngineUnity::HEU_HandleParamBinding::HEU_HandleParamType paramType;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HEU_HandleParamBinding::HEU_HandleParamType) == 0x4);
    // public System.Int32 _parmID
    // Size: 0x4
    // Offset: 0x14
    int parmID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.String _paramName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* paramName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean _bDisabled
    // Size: 0x1
    // Offset: 0x20
    bool bDisabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bDisabled and: boundChannels
    char __padding3[0x7] = {};
    // public System.Boolean[] _boundChannels
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<bool> boundChannels;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    public:
    // Creating interface conversion operator: operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_HandleParamBinding*>
    operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_HandleParamBinding*>() noexcept {
      return *reinterpret_cast<HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_HandleParamBinding*>*>(this);
    }
    // Get instance field reference: public HoudiniEngineUnity.HEU_HandleParamBinding/HoudiniEngineUnity.HEU_HandleParamType _paramType
    HoudiniEngineUnity::HEU_HandleParamBinding::HEU_HandleParamType& dyn__paramType();
    // Get instance field reference: public System.Int32 _parmID
    int& dyn__parmID();
    // Get instance field reference: public System.String _paramName
    ::Il2CppString*& dyn__paramName();
    // Get instance field reference: public System.Boolean _bDisabled
    bool& dyn__bDisabled();
    // Get instance field reference: public System.Boolean[] _boundChannels
    ::ArrayW<bool>& dyn__boundChannels();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_HandleParamBinding other)
    // Offset: 0x15DC9C0
    bool IsEquivalentTo(HoudiniEngineUnity::HEU_HandleParamBinding* other);
    // public System.Void .ctor()
    // Offset: 0x15DB8D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_HandleParamBinding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_HandleParamBinding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_HandleParamBinding*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_HandleParamBinding
  #pragma pack(pop)
  static check_size<sizeof(HEU_HandleParamBinding), 40 + sizeof(::ArrayW<bool>)> __HoudiniEngineUnity_HEU_HandleParamBindingSizeCheck;
  static_assert(sizeof(HEU_HandleParamBinding) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_HandleParamBinding*, "HoudiniEngineUnity", "HEU_HandleParamBinding");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_HandleParamBinding::HEU_HandleParamType, "HoudiniEngineUnity", "HEU_HandleParamBinding/HEU_HandleParamType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HandleParamBinding::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_HandleParamBinding::*)(HoudiniEngineUnity::HEU_HandleParamBinding*)>(&HoudiniEngineUnity::HEU_HandleParamBinding::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HandleParamBinding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_HandleParamBinding*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HandleParamBinding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
