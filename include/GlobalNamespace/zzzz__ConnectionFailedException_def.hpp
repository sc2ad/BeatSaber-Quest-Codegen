#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectionFailedException;
}
// Type: ::ConnectionFailedException
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12649))
// CS Name: ConnectionFailedException
class CORDL_TYPE ConnectionFailedException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ConnectionFailedException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedException", modifiers: " const&", def_value: None }]
constexpr ConnectionFailedException(ConnectionFailedException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedException", modifiers: "&&", def_value: None }]
constexpr ConnectionFailedException(ConnectionFailedException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConnectionFailedException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr ConnectionFailedException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConnectionFailedException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConnectionFailedException& operator=(ConnectionFailedException&& o) noexcept = default;
  constexpr ConnectionFailedException& operator=(ConnectionFailedException const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ConnectionFailedReason __declspec(property(get=__get_reason, put=__set_reason))  reason;

constexpr void __set_reason(GlobalNamespace::ConnectionFailedReason value) ;

constexpr GlobalNamespace::ConnectionFailedReason __get_reason() const;


// Methods

static GlobalNamespace::ConnectionFailedException New_ctor(GlobalNamespace::ConnectionFailedReason reason) ;

/// @brief Method .ctor addr 0xda533c size 0x6c virtual false final false
 void _ctor(GlobalNamespace::ConnectionFailedReason reason) ;

static GlobalNamespace::ConnectionFailedException New_ctor(GlobalNamespace::ConnectionFailedReason reason, ::StringW message) ;

/// @brief Method .ctor addr 0xda53a8 size 0x74 virtual false final false
 void _ctor(GlobalNamespace::ConnectionFailedReason reason, ::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ConnectionFailedException);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectionFailedException, "", "ConnectionFailedException");
