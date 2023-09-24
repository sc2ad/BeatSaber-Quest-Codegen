#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class EventArgs;
}
namespace System::Collections {
class IList;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
namespace System::Collections::Specialized {
struct BitVector32;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System {
class Attribute;
}
namespace System::Diagnostics {
class TraceSwitch;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Reflection {
class PropertyInfo;
}
// Forward declare root types
namespace System::ComponentModel {
class ReflectPropertyDescriptor;
}
// Type: System.ComponentModel::ReflectPropertyDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8295))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8326))
// CS Name: System.ComponentModel.ReflectPropertyDescriptor
class CORDL_TYPE ReflectPropertyDescriptor : public System::ComponentModel::PropertyDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~ReflectPropertyDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectPropertyDescriptor", modifiers: " const&", def_value: None }]
constexpr ReflectPropertyDescriptor(ReflectPropertyDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectPropertyDescriptor", modifiers: "&&", def_value: None }]
constexpr ReflectPropertyDescriptor(ReflectPropertyDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectPropertyDescriptor(void* ptr) noexcept : System::ComponentModel::PropertyDescriptor(ptr) {
}


  constexpr ReflectPropertyDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectPropertyDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectPropertyDescriptor& operator=(ReflectPropertyDescriptor&& o) noexcept = default;
  constexpr ReflectPropertyDescriptor& operator=(ReflectPropertyDescriptor const& o) noexcept = default;
                


// Fields

static ::ArrayW<System::Type> __declspec(property(get=__get_argsNone, put=__set_argsNone))  argsNone;

static void __set_argsNone(::ArrayW<System::Type> value) ;

static ::ArrayW<System::Type> __get_argsNone() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_noValue, put=__set_noValue))  noValue;

static void __set_noValue(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_noValue() ;

static System::Diagnostics::TraceSwitch __declspec(property(get=__get_PropDescCreateSwitch, put=__set_PropDescCreateSwitch))  PropDescCreateSwitch;

static void __set_PropDescCreateSwitch(System::Diagnostics::TraceSwitch value) ;

static System::Diagnostics::TraceSwitch __get_PropDescCreateSwitch() ;

static System::Diagnostics::TraceSwitch __declspec(property(get=__get_PropDescUsageSwitch, put=__set_PropDescUsageSwitch))  PropDescUsageSwitch;

static void __set_PropDescUsageSwitch(System::Diagnostics::TraceSwitch value) ;

static System::Diagnostics::TraceSwitch __get_PropDescUsageSwitch() ;

static int32_t __declspec(property(get=__get_BitDefaultValueQueried, put=__set_BitDefaultValueQueried))  BitDefaultValueQueried;

static void __set_BitDefaultValueQueried(int32_t value) ;

static int32_t __get_BitDefaultValueQueried() ;

static int32_t __declspec(property(get=__get_BitGetQueried, put=__set_BitGetQueried))  BitGetQueried;

static void __set_BitGetQueried(int32_t value) ;

static int32_t __get_BitGetQueried() ;

static int32_t __declspec(property(get=__get_BitSetQueried, put=__set_BitSetQueried))  BitSetQueried;

static void __set_BitSetQueried(int32_t value) ;

static int32_t __get_BitSetQueried() ;

static int32_t __declspec(property(get=__get_BitShouldSerializeQueried, put=__set_BitShouldSerializeQueried))  BitShouldSerializeQueried;

static void __set_BitShouldSerializeQueried(int32_t value) ;

static int32_t __get_BitShouldSerializeQueried() ;

static int32_t __declspec(property(get=__get_BitResetQueried, put=__set_BitResetQueried))  BitResetQueried;

static void __set_BitResetQueried(int32_t value) ;

static int32_t __get_BitResetQueried() ;

static int32_t __declspec(property(get=__get_BitChangedQueried, put=__set_BitChangedQueried))  BitChangedQueried;

static void __set_BitChangedQueried(int32_t value) ;

static int32_t __get_BitChangedQueried() ;

static int32_t __declspec(property(get=__get_BitIPropChangedQueried, put=__set_BitIPropChangedQueried))  BitIPropChangedQueried;

static void __set_BitIPropChangedQueried(int32_t value) ;

static int32_t __get_BitIPropChangedQueried() ;

static int32_t __declspec(property(get=__get_BitReadOnlyChecked, put=__set_BitReadOnlyChecked))  BitReadOnlyChecked;

static void __set_BitReadOnlyChecked(int32_t value) ;

static int32_t __get_BitReadOnlyChecked() ;

static int32_t __declspec(property(get=__get_BitAmbientValueQueried, put=__set_BitAmbientValueQueried))  BitAmbientValueQueried;

static void __set_BitAmbientValueQueried(int32_t value) ;

static int32_t __get_BitAmbientValueQueried() ;

static int32_t __declspec(property(get=__get_BitSetOnDemand, put=__set_BitSetOnDemand))  BitSetOnDemand;

static void __set_BitSetOnDemand(int32_t value) ;

static int32_t __get_BitSetOnDemand() ;

 System::Collections::Specialized::BitVector32 __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(System::Collections::Specialized::BitVector32 value) ;

constexpr System::Collections::Specialized::BitVector32 __get_state() const;

 System::Type __declspec(property(get=__get_componentClass, put=__set_componentClass))  componentClass;

constexpr void __set_componentClass(System::Type value) ;

constexpr System::Type __get_componentClass() const;

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_defaultValue, put=__set_defaultValue))  defaultValue;

constexpr void __set_defaultValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_defaultValue() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_ambientValue, put=__set_ambientValue))  ambientValue;

constexpr void __set_ambientValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_ambientValue() const;

 System::Reflection::PropertyInfo __declspec(property(get=__get_propInfo, put=__set_propInfo))  propInfo;

constexpr void __set_propInfo(System::Reflection::PropertyInfo value) ;

constexpr System::Reflection::PropertyInfo __get_propInfo() const;

 System::Reflection::MethodInfo __declspec(property(get=__get_getMethod, put=__set_getMethod))  getMethod;

constexpr void __set_getMethod(System::Reflection::MethodInfo value) ;

constexpr System::Reflection::MethodInfo __get_getMethod() const;

 System::Reflection::MethodInfo __declspec(property(get=__get_setMethod, put=__set_setMethod))  setMethod;

constexpr void __set_setMethod(System::Reflection::MethodInfo value) ;

constexpr System::Reflection::MethodInfo __get_setMethod() const;

 System::Reflection::MethodInfo __declspec(property(get=__get_shouldSerializeMethod, put=__set_shouldSerializeMethod))  shouldSerializeMethod;

constexpr void __set_shouldSerializeMethod(System::Reflection::MethodInfo value) ;

constexpr System::Reflection::MethodInfo __get_shouldSerializeMethod() const;

 System::Reflection::MethodInfo __declspec(property(get=__get_resetMethod, put=__set_resetMethod))  resetMethod;

constexpr void __set_resetMethod(System::Reflection::MethodInfo value) ;

constexpr System::Reflection::MethodInfo __get_resetMethod() const;

 System::ComponentModel::EventDescriptor __declspec(property(get=__get_realChangedEvent, put=__set_realChangedEvent))  realChangedEvent;

constexpr void __set_realChangedEvent(System::ComponentModel::EventDescriptor value) ;

constexpr System::ComponentModel::EventDescriptor __get_realChangedEvent() const;

 System::Type __declspec(property(get=__get_receiverType, put=__set_receiverType))  receiverType;

constexpr void __set_receiverType(System::Type value) ;

constexpr System::Type __get_receiverType() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AmbientValue))  AmbientValue;

 System::Type __declspec(property(get=get_ComponentType))  ComponentType;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_DefaultValue))  DefaultValue;

 System::Reflection::MethodInfo __declspec(property(get=get_GetMethodValue))  GetMethodValue;

 bool __declspec(property(get=get_IsExtender))  IsExtender;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 System::Type __declspec(property(get=get_PropertyType))  PropertyType;

 System::Reflection::MethodInfo __declspec(property(get=get_ResetMethodValue))  ResetMethodValue;

 System::Reflection::MethodInfo __declspec(property(get=get_SetMethodValue))  SetMethodValue;

 System::Reflection::MethodInfo __declspec(property(get=get_ShouldSerializeMethodValue))  ShouldSerializeMethodValue;


// Methods

static System::ComponentModel::ReflectPropertyDescriptor New_ctor(System::Type componentClass, ::StringW name, System::Type type, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method .ctor addr 0x278c478 size 0x2f0 virtual false final false
 void _ctor(System::Type componentClass, ::StringW name, System::Type type, ::ArrayW<System::Attribute> attributes) ;

static System::ComponentModel::ReflectPropertyDescriptor New_ctor(System::Type componentClass, ::StringW name, System::Type type, System::Reflection::PropertyInfo propInfo, System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, ::ArrayW<System::Attribute> attrs) ;

/// @brief Method .ctor addr 0x278c768 size 0x120 virtual false final false
 void _ctor(System::Type componentClass, ::StringW name, System::Type type, System::Reflection::PropertyInfo propInfo, System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, ::ArrayW<System::Attribute> attrs) ;

static System::ComponentModel::ReflectPropertyDescriptor New_ctor(System::Type componentClass, ::StringW name, System::Type type, System::Type receiverType, System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, ::ArrayW<System::Attribute> attrs) ;

/// @brief Method .ctor addr 0x278c888 size 0xcc virtual false final false
 void _ctor(System::Type componentClass, ::StringW name, System::Type type, System::Type receiverType, System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, ::ArrayW<System::Attribute> attrs) ;

/// @brief Method get_AmbientValue addr 0x278c954 size 0x17c virtual false final false
 ::bs_hook::Il2CppWrapperType get_AmbientValue() ;

/// @brief Method get_ComponentType addr 0x278cad0 size 0x8 virtual true final false
 System::Type get_ComponentType() ;

/// @brief Method get_DefaultValue addr 0x278cad8 size 0x290 virtual false final false
 ::bs_hook::Il2CppWrapperType get_DefaultValue() ;

/// @brief Method get_GetMethodValue addr 0x278cd68 size 0x43c virtual false final false
 System::Reflection::MethodInfo get_GetMethodValue() ;

/// @brief Method get_IsExtender addr 0x278d1a4 size 0x60 virtual false final false
 bool get_IsExtender() ;

/// @brief Method get_IsReadOnly addr 0x278d204 size 0x100 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_PropertyType addr 0x278d808 size 0x8 virtual true final false
 System::Type get_PropertyType() ;

/// @brief Method get_ResetMethodValue addr 0x278d810 size 0x208 virtual false final false
 System::Reflection::MethodInfo get_ResetMethodValue() ;

/// @brief Method get_SetMethodValue addr 0x278d304 size 0x504 virtual false final false
 System::Reflection::MethodInfo get_SetMethodValue() ;

/// @brief Method get_ShouldSerializeMethodValue addr 0x278da18 size 0x208 virtual false final false
 System::Reflection::MethodInfo get_ShouldSerializeMethodValue() ;

/// @brief Method ExtenderCanResetValue addr 0x278dc20 size 0x284 virtual false final false
 bool ExtenderCanResetValue(System::ComponentModel::IExtenderProvider provider, ::bs_hook::Il2CppWrapperType component) ;

/// @brief Method ExtenderGetReceiverType addr 0x278dfd4 size 0x8 virtual false final false
 System::Type ExtenderGetReceiverType() ;

/// @brief Method ExtenderGetType addr 0x278dfdc size 0x10 virtual false final false
 System::Type ExtenderGetType(System::ComponentModel::IExtenderProvider provider) ;

/// @brief Method ExtenderGetValue addr 0x278dea4 size 0x130 virtual false final false
 ::bs_hook::Il2CppWrapperType ExtenderGetValue(System::ComponentModel::IExtenderProvider provider, ::bs_hook::Il2CppWrapperType component) ;

/// @brief Method ExtenderResetValue addr 0x278dfec size 0x514 virtual false final false
 void ExtenderResetValue(System::ComponentModel::IExtenderProvider provider, ::bs_hook::Il2CppWrapperType component, System::ComponentModel::PropertyDescriptor notifyDesc) ;

/// @brief Method ExtenderSetValue addr 0x278e500 size 0x460 virtual false final false
 void ExtenderSetValue(System::ComponentModel::IExtenderProvider provider, ::bs_hook::Il2CppWrapperType component, ::bs_hook::Il2CppWrapperType value, System::ComponentModel::PropertyDescriptor notifyDesc) ;

/// @brief Method ExtenderShouldSerializeValue addr 0x278e960 size 0x430 virtual false final false
 bool ExtenderShouldSerializeValue(System::ComponentModel::IExtenderProvider provider, ::bs_hook::Il2CppWrapperType component) ;

/// @brief Method CanResetValue addr 0x278ed90 size 0x274 virtual true final false
 bool CanResetValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method FillAttributes addr 0x278f004 size 0xab8 virtual true final false
 void FillAttributes(System::Collections::IList attributes) ;

/// @brief Method GetValue addr 0x278fc18 size 0x3c8 virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method OnValueChanged addr 0x278ffe0 size 0xa8 virtual true final false
 void OnValueChanged(::bs_hook::Il2CppWrapperType component, System::EventArgs e) ;

/// @brief Method ResetValue addr 0x2790088 size 0x454 virtual true final false
 void ResetValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method SetValue addr 0x27904dc size 0x5dc virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType component, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ShouldSerializeValue addr 0x2790ab8 size 0x328 virtual true final false
 bool ShouldSerializeValue(::bs_hook::Il2CppWrapperType component) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::ReflectPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ReflectPropertyDescriptor, "System.ComponentModel", "ReflectPropertyDescriptor");
