#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace BGNet::Core {
class ITimeProvider;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class UtcTimeProvider;
}
// Type: ::UtcTimeProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12932))
// CS Name: UtcTimeProvider
class CORDL_TYPE UtcTimeProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to BGNet::Core::ITimeProvider
constexpr operator  BGNet::Core::ITimeProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UtcTimeProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "UtcTimeProvider", modifiers: " const&", def_value: None }]
constexpr UtcTimeProvider(UtcTimeProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UtcTimeProvider", modifiers: "&&", def_value: None }]
constexpr UtcTimeProvider(UtcTimeProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UtcTimeProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UtcTimeProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UtcTimeProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UtcTimeProvider& operator=(UtcTimeProvider&& o) noexcept = default;
  constexpr UtcTimeProvider& operator=(UtcTimeProvider const& o) noexcept = default;
                


// Fields

static System::DateTime __declspec(property(get=__get__epoch, put=__set__epoch))  _epoch;

static void __set__epoch(System::DateTime value) ;

static System::DateTime __get__epoch() ;

static GlobalNamespace::UtcTimeProvider __declspec(property(get=__get_instance, put=__set_instance))  instance;

static void __set_instance(GlobalNamespace::UtcTimeProvider value) ;

static GlobalNamespace::UtcTimeProvider __get_instance() ;


// Methods

/// @brief Method GetTimeMs addr 0xdcdc60 size 0x2c virtual true final true
 int64_t GetTimeMs() ;

/// @brief Method GetTicks addr 0xdbc8b4 size 0xb4 virtual true final true
 int64_t GetTicks() ;

static GlobalNamespace::UtcTimeProvider New_ctor() ;

/// @brief Method .ctor addr 0xdcdc8c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::UtcTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UtcTimeProvider, "", "UtcTimeProvider");
