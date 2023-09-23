#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace HoudiniEngineUnity {
class TOPNodeTags;
}
// Type: HoudiniEngineUnity::TOPNodeTags
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9710))
// CS Name: HoudiniEngineUnity.TOPNodeTags
class CORDL_TYPE TOPNodeTags : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TOPNodeTags() = default;

// Ctor Parameters [CppParam { name: "", ty: "TOPNodeTags", modifiers: " const&", def_value: None }]
constexpr TOPNodeTags(TOPNodeTags const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TOPNodeTags", modifiers: "&&", def_value: None }]
constexpr TOPNodeTags(TOPNodeTags&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TOPNodeTags(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TOPNodeTags& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TOPNodeTags& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TOPNodeTags& operator=(TOPNodeTags&& o) noexcept = default;
  constexpr TOPNodeTags& operator=(TOPNodeTags const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__show, put=__set__show))  _show;

constexpr void __set__show(bool value) ;

constexpr bool __get__show() const;

 bool __declspec(property(get=__get__autoload, put=__set__autoload))  _autoload;

constexpr void __set__autoload(bool value) ;

constexpr bool __get__autoload() const;


// Methods

// Ctor Parameters []
explicit TOPNodeTags() ;

/// @brief Method .ctor addr 0x2028e58 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::TOPNodeTags);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::TOPNodeTags, "HoudiniEngineUnity", "TOPNodeTags");
