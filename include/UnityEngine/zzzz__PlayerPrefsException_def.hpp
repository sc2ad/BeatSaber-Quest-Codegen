#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine {
class PlayerPrefsException;
}
// Type: UnityEngine::PlayerPrefsException
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9981))
// CS Name: UnityEngine.PlayerPrefsException
class CORDL_TYPE PlayerPrefsException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PlayerPrefsException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefsException", modifiers: " const&", def_value: None }]
constexpr PlayerPrefsException(PlayerPrefsException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefsException", modifiers: "&&", def_value: None }]
constexpr PlayerPrefsException(PlayerPrefsException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerPrefsException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr PlayerPrefsException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerPrefsException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerPrefsException& operator=(PlayerPrefsException&& o) noexcept = default;
  constexpr PlayerPrefsException& operator=(PlayerPrefsException const& o) noexcept = default;
                


// Methods

static UnityEngine::PlayerPrefsException New_ctor(::StringW error) ;

/// @brief Method .ctor addr 0x2b28b50 size 0x68 virtual false final false
 void _ctor(::StringW error) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::PlayerPrefsException);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerPrefsException, "UnityEngine", "PlayerPrefsException");
