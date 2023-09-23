#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::IO {
class StreamHelpers;
}
// Type: System.IO::StreamHelpers
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3563))
// CS Name: System.IO.StreamHelpers
class CORDL_TYPE StreamHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StreamHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamHelpers", modifiers: " const&", def_value: None }]
constexpr StreamHelpers(StreamHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamHelpers", modifiers: "&&", def_value: None }]
constexpr StreamHelpers(StreamHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StreamHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StreamHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StreamHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StreamHelpers& operator=(StreamHelpers&& o) noexcept = default;
  constexpr StreamHelpers& operator=(StreamHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method ValidateCopyToArgs addr 0x2391358 size 0x240 virtual false final false
static void ValidateCopyToArgs(System::IO::Stream source, System::IO::Stream destination, int32_t bufferSize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::StreamHelpers);
DEFINE_IL2CPP_ARG_TYPE(System::IO::StreamHelpers, "System.IO", "StreamHelpers");
