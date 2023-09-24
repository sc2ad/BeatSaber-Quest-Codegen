#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Assets/OVR/Scripts/zzzz__Record_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Assets::OVR::Scripts {
class FixMethodDelegate;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Assets::OVR::Scripts {
class FixRecord;
}
// Type: Assets.OVR.Scripts::FixRecord
namespace Assets::OVR::Scripts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9513))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9516))
// CS Name: Assets.OVR.Scripts.FixRecord
class CORDL_TYPE FixRecord : public Assets::OVR::Scripts::Record {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~FixRecord() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixRecord", modifiers: " const&", def_value: None }]
constexpr FixRecord(FixRecord const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixRecord", modifiers: "&&", def_value: None }]
constexpr FixRecord(FixRecord&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixRecord(void* ptr) noexcept : Assets::OVR::Scripts::Record(ptr) {
}


  constexpr FixRecord& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixRecord& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixRecord& operator=(FixRecord&& o) noexcept = default;
  constexpr FixRecord& operator=(FixRecord const& o) noexcept = default;
                


// Fields

 Assets::OVR::Scripts::FixMethodDelegate __declspec(property(get=__get_fixMethod, put=__set_fixMethod))  fixMethod;

constexpr void __set_fixMethod(Assets::OVR::Scripts::FixMethodDelegate value) ;

constexpr Assets::OVR::Scripts::FixMethodDelegate __get_fixMethod() const;

 UnityEngine::Object __declspec(property(get=__get_targetObject, put=__set_targetObject))  targetObject;

constexpr void __set_targetObject(UnityEngine::Object value) ;

constexpr UnityEngine::Object __get_targetObject() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_buttonNames, put=__set_buttonNames))  buttonNames;

constexpr void __set_buttonNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_buttonNames() const;

 bool __declspec(property(get=__get_editModeRequired, put=__set_editModeRequired))  editModeRequired;

constexpr void __set_editModeRequired(bool value) ;

constexpr bool __get_editModeRequired() const;

 bool __declspec(property(get=__get_complete, put=__set_complete))  complete;

constexpr void __set_complete(bool value) ;

constexpr bool __get_complete() const;


// Methods

static Assets::OVR::Scripts::FixRecord New_ctor(int32_t order, ::StringW cat, ::StringW msg, Assets::OVR::Scripts::FixMethodDelegate fix, UnityEngine::Object target, bool editRequired, ::ArrayW<::StringW> buttons) ;

/// @brief Method .ctor addr 0x266abb0 size 0x6c virtual false final false
 void _ctor(int32_t order, ::StringW cat, ::StringW msg, Assets::OVR::Scripts::FixMethodDelegate fix, UnityEngine::Object target, bool editRequired, ::ArrayW<::StringW> buttons) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Assets::OVR::Scripts
NEED_NO_BOX(Assets::OVR::Scripts::FixRecord);
DEFINE_IL2CPP_ARG_TYPE(Assets::OVR::Scripts::FixRecord, "Assets.OVR.Scripts", "FixRecord");
