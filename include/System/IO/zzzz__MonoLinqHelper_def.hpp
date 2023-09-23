#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace System::IO {
class MonoLinqHelper;
}
// Type: System.IO::MonoLinqHelper
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3625))
// CS Name: System.IO.MonoLinqHelper
class CORDL_TYPE MonoLinqHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MonoLinqHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoLinqHelper", modifiers: " const&", def_value: None }]
constexpr MonoLinqHelper(MonoLinqHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoLinqHelper", modifiers: "&&", def_value: None }]
constexpr MonoLinqHelper(MonoLinqHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoLinqHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoLinqHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoLinqHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoLinqHelper& operator=(MonoLinqHelper&& o) noexcept = default;
  constexpr MonoLinqHelper& operator=(MonoLinqHelper const& o) noexcept = default;
                


// Methods

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> ToArray(System::Collections::Generic::IEnumerable_1<T> source) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::MonoLinqHelper);
DEFINE_IL2CPP_ARG_TYPE(System::IO::MonoLinqHelper, "System.IO", "MonoLinqHelper");
