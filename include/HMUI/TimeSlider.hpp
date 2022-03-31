// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.RangeValuesTextSlider
#include "HMUI/RangeValuesTextSlider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: TimeSlider
  class TimeSlider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::TimeSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TimeSlider*, "HMUI", "TimeSlider");
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.TimeSlider
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeSlider : public ::HMUI::RangeValuesTextSlider {
    public:
    // Nested type: ::HMUI::TimeSlider::TimeType
    struct TimeType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.TimeSlider/HMUI.TimeType
    // [TokenAttribute] Offset: FFFFFFFF
    struct TimeType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TimeType
      constexpr TimeType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.TimeSlider/HMUI.TimeType Default
      static constexpr const int Default = 0;
      // Get static field: static public HMUI.TimeSlider/HMUI.TimeType Default
      static ::HMUI::TimeSlider::TimeType _get_Default();
      // Set static field: static public HMUI.TimeSlider/HMUI.TimeType Default
      static void _set_Default(::HMUI::TimeSlider::TimeType value);
      // static field const value: static public HMUI.TimeSlider/HMUI.TimeType Miliseconds
      static constexpr const int Miliseconds = 1;
      // Get static field: static public HMUI.TimeSlider/HMUI.TimeType Miliseconds
      static ::HMUI::TimeSlider::TimeType _get_Miliseconds();
      // Set static field: static public HMUI.TimeSlider/HMUI.TimeType Miliseconds
      static void _set_Miliseconds(::HMUI::TimeSlider::TimeType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // HMUI.TimeSlider/HMUI.TimeType
    #pragma pack(pop)
    static check_size<sizeof(TimeSlider::TimeType), 0 + sizeof(int)> __HMUI_TimeSlider_TimeTypeSizeCheck;
    static_assert(sizeof(TimeSlider::TimeType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private HMUI.TimeSlider/HMUI.TimeType _timeType
    // Size: 0x4
    // Offset: 0x168
    ::HMUI::TimeSlider::TimeType timeType;
    // Field size check
    static_assert(sizeof(::HMUI::TimeSlider::TimeType) == 0x4);
    public:
    // Get instance field reference: private HMUI.TimeSlider/HMUI.TimeType _timeType
    ::HMUI::TimeSlider::TimeType& dyn__timeType();
    // public System.Void .ctor()
    // Offset: 0x1693E68
    // Implemented from: HMUI.RangeValuesTextSlider
    // Base method: System.Void RangeValuesTextSlider::.ctor()
    // Base method: System.Void TextSlider::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::TimeSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeSlider*, creationType>()));
    }
    // protected override System.String TextForValue(System.Single value)
    // Offset: 0x1693CB0
    // Implemented from: HMUI.RangeValuesTextSlider
    // Base method: System.String RangeValuesTextSlider::TextForValue(System.Single value)
    ::StringW TextForValue(float value);
  }; // HMUI.TimeSlider
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TimeSlider::TimeType, "HMUI", "TimeSlider/TimeType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::TimeSlider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::TimeSlider::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HMUI::TimeSlider::*)(float)>(&HMUI::TimeSlider::TextForValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TimeSlider*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
