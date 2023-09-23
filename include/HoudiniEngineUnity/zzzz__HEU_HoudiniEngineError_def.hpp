#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HoudiniEngineError;
}
// Type: HoudiniEngineUnity::HEU_HoudiniEngineError
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9614))
// CS Name: HoudiniEngineUnity.HEU_HoudiniEngineError
class CORDL_TYPE HEU_HoudiniEngineError : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~HEU_HoudiniEngineError() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniEngineError", modifiers: " const&", def_value: None }]
constexpr HEU_HoudiniEngineError(HEU_HoudiniEngineError const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniEngineError", modifiers: "&&", def_value: None }]
constexpr HEU_HoudiniEngineError(HEU_HoudiniEngineError&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_HoudiniEngineError(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr HEU_HoudiniEngineError& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_HoudiniEngineError& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_HoudiniEngineError& operator=(HEU_HoudiniEngineError&& o) noexcept = default;
  constexpr HEU_HoudiniEngineError& operator=(HEU_HoudiniEngineError const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__errorMsg, put=__set__errorMsg))  _errorMsg;

constexpr void __set__errorMsg(::StringW value) ;

constexpr ::StringW __get__errorMsg() const;


// Methods

// Ctor Parameters []
explicit HEU_HoudiniEngineError() ;

/// @brief Method .ctor addr 0x2016b20 size 0x7c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "errorMsg", ty: "::StringW", modifiers: "", def_value: None }]
explicit HEU_HoudiniEngineError(::StringW errorMsg) ;

/// @brief Method .ctor addr 0x2016b9c size 0x88 virtual false final false
 void _ctor(::StringW errorMsg) ;

/// @brief Method ToString addr 0x2016c24 size 0x8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_HoudiniEngineError);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_HoudiniEngineError, "HoudiniEngineUnity", "HEU_HoudiniEngineError");
