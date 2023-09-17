#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class Hashtable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StartDragArgs;
}
// Type: UnityEngine.UIElements::StartDragArgs
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7044))
// CS Name: UnityEngine.UIElements.StartDragArgs
class CORDL_TYPE StartDragArgs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StartDragArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "StartDragArgs", modifiers: " const&", def_value: None }]
constexpr StartDragArgs(StartDragArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StartDragArgs", modifiers: "&&", def_value: None }]
constexpr StartDragArgs(StartDragArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StartDragArgs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StartDragArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StartDragArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StartDragArgs& operator=(StartDragArgs&& o) noexcept = default;
  constexpr StartDragArgs& operator=(StartDragArgs const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__title_k__BackingField, put=__set__title_k__BackingField))  _title_k__BackingField;

constexpr void __set__title_k__BackingField(::StringW value) ;

constexpr ::StringW __get__title_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__userData_k__BackingField, put=__set__userData_k__BackingField))  _userData_k__BackingField;

constexpr void __set__userData_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__userData_k__BackingField() const;

 ::System::Collections::Hashtable __declspec(property(get=__get_m_GenericData, put=__set_m_GenericData))  m_GenericData;

constexpr void __set_m_GenericData(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get_m_GenericData() const;

 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object> __declspec(property(get=__get__unityObjectReferences_k__BackingField, put=__set__unityObjectReferences_k__BackingField))  _unityObjectReferences_k__BackingField;

constexpr void __set__unityObjectReferences_k__BackingField(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object> __get__unityObjectReferences_k__BackingField() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_userData))  userData;


// Methods

/// @brief Method get_userData addr 0x2c910a0 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_userData() ;

// Ctor Parameters [CppParam { name: "title", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userData", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit StartDragArgs(::StringW title, ::bs_hook::Il2CppWrapperType userData) ;

/// @brief Method .ctor addr 0x2c90fe8 size 0x80 virtual false final false
 void _ctor(::StringW title, ::bs_hook::Il2CppWrapperType userData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::StartDragArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StartDragArgs, "UnityEngine.UIElements", "StartDragArgs");
