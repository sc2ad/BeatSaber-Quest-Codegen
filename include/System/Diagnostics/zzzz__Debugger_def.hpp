#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Diagnostics {
class Debugger;
}
// Type: System.Diagnostics::Debugger
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3723))
// CS Name: System.Diagnostics.Debugger
class CORDL_TYPE Debugger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Debugger() = default;

// Ctor Parameters [CppParam { name: "", ty: "Debugger", modifiers: " const&", def_value: None }]
constexpr Debugger(Debugger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Debugger", modifiers: "&&", def_value: None }]
constexpr Debugger(Debugger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Debugger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Debugger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Debugger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Debugger& operator=(Debugger&& o) noexcept = default;
  constexpr Debugger& operator=(Debugger const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_DefaultCategory, put=__set_DefaultCategory))  DefaultCategory;

static void __set_DefaultCategory(::StringW value) ;

static ::StringW __get_DefaultCategory() ;


// Methods

/// @brief Method IsLogging addr 0x240c14c size 0x4 virtual false final false
static bool IsLogging() ;

/// @brief Method Log_icall addr 0x240c150 size 0x4 virtual false final false
static void Log_icall(int32_t level, ByRef<::StringW> category, ByRef<::StringW> message) ;

/// @brief Method Log addr 0x240c154 size 0x6c virtual false final false
static void Log(int32_t level, ::StringW category, ::StringW message) ;

/// @brief Method NotifyOfCrossThreadDependency addr 0x240c1c0 size 0x4 virtual false final false
static void NotifyOfCrossThreadDependency() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::Debugger);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Debugger, "System.Diagnostics", "Debugger");
