#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::Assertions {
class AssertionException;
}
// Type: UnityEngine.Assertions::AssertionException
namespace UnityEngine::Assertions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10252))
// CS Name: UnityEngine.Assertions.AssertionException
class CORDL_TYPE AssertionException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~AssertionException() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssertionException", modifiers: " const&", def_value: None }]
constexpr AssertionException(AssertionException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssertionException", modifiers: "&&", def_value: None }]
constexpr AssertionException(AssertionException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssertionException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr AssertionException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssertionException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssertionException& operator=(AssertionException&& o) noexcept = default;
  constexpr AssertionException& operator=(AssertionException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_UserMessage, put=__set_m_UserMessage))  m_UserMessage;

constexpr void __set_m_UserMessage(::StringW value) ;

constexpr ::StringW __get_m_UserMessage() const;


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userMessage", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssertionException(::StringW message, ::StringW userMessage) ;

/// @brief Method .ctor addr 0x2b712a4 size 0x74 virtual false final false
 void _ctor(::StringW message, ::StringW userMessage) ;

/// @brief Method get_Message addr 0x2b719b8 size 0x74 virtual true final false
 ::StringW get_Message() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Assertions
NEED_NO_BOX(UnityEngine::Assertions::AssertionException);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Assertions::AssertionException, "UnityEngine.Assertions", "AssertionException");
