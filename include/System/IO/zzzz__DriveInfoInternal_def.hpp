#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::IO {
class DriveInfoInternal;
}
// Type: System.IO::DriveInfoInternal
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3624))
// CS Name: System.IO.DriveInfoInternal
class CORDL_TYPE DriveInfoInternal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DriveInfoInternal() = default;

// Ctor Parameters [CppParam { name: "", ty: "DriveInfoInternal", modifiers: " const&", def_value: None }]
constexpr DriveInfoInternal(DriveInfoInternal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DriveInfoInternal", modifiers: "&&", def_value: None }]
constexpr DriveInfoInternal(DriveInfoInternal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DriveInfoInternal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DriveInfoInternal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DriveInfoInternal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DriveInfoInternal& operator=(DriveInfoInternal&& o) noexcept = default;
  constexpr DriveInfoInternal& operator=(DriveInfoInternal const& o) noexcept = default;
                


// Methods

/// @brief Method GetLogicalDrives addr 0x23d55e4 size 0x8 virtual false final false
static ::ArrayW<::StringW> GetLogicalDrives() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::DriveInfoInternal);
DEFINE_IL2CPP_ARG_TYPE(System::IO::DriveInfoInternal, "System.IO", "DriveInfoInternal");
