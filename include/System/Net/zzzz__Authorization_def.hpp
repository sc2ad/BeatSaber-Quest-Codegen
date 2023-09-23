#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Net {
class Authorization;
}
// Type: System.Net::Authorization
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7909))
// CS Name: System.Net.Authorization
class CORDL_TYPE Authorization : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Authorization() = default;

// Ctor Parameters [CppParam { name: "", ty: "Authorization", modifiers: " const&", def_value: None }]
constexpr Authorization(Authorization const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Authorization", modifiers: "&&", def_value: None }]
constexpr Authorization(Authorization&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Authorization(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Authorization& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Authorization& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Authorization& operator=(Authorization&& o) noexcept = default;
  constexpr Authorization& operator=(Authorization const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Message, put=__set_m_Message))  m_Message;

constexpr void __set_m_Message(::StringW value) ;

constexpr ::StringW __get_m_Message() const;

 bool __declspec(property(get=__get_m_Complete, put=__set_m_Complete))  m_Complete;

constexpr void __set_m_Complete(bool value) ;

constexpr bool __get_m_Complete() const;

 ::StringW __declspec(property(get=__get_ModuleAuthenticationType, put=__set_ModuleAuthenticationType))  ModuleAuthenticationType;

constexpr void __set_ModuleAuthenticationType(::StringW value) ;

constexpr ::StringW __get_ModuleAuthenticationType() const;


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;

 bool __declspec(property(get=get_Complete))  Complete;


// Methods

// Ctor Parameters [CppParam { name: "token", ty: "::StringW", modifiers: "", def_value: None }]
explicit Authorization(::StringW token) ;

/// @brief Method .ctor addr 0x2809d90 size 0x80 virtual false final false
 void _ctor(::StringW token) ;

// Ctor Parameters [CppParam { name: "token", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "finished", ty: "bool", modifiers: "", def_value: None }]
explicit Authorization(::StringW token, bool finished) ;

/// @brief Method .ctor addr 0x2809e10 size 0x80 virtual false final false
 void _ctor(::StringW token, bool finished) ;

/// @brief Method get_Message addr 0x2809e90 size 0x8 virtual false final false
 ::StringW get_Message() ;

/// @brief Method get_Complete addr 0x2809e98 size 0x8 virtual false final false
 bool get_Complete() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::Authorization);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Authorization, "System.Net", "Authorization");
