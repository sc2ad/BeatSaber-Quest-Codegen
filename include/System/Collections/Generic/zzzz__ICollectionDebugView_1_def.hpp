#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class ICollectionDebugView_1;
}
// Type: System.Collections.Generic::ICollectionDebugView`1
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8383))
// CS Name: System.Collections.Generic.ICollectionDebugView`1
class CORDL_TYPE ICollectionDebugView_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ICollectionDebugView_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ICollectionDebugView_1", modifiers: " const&", def_value: None }]
constexpr ICollectionDebugView_1(ICollectionDebugView_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ICollectionDebugView_1", modifiers: "&&", def_value: None }]
constexpr ICollectionDebugView_1(ICollectionDebugView_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICollectionDebugView_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ICollectionDebugView_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ICollectionDebugView_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ICollectionDebugView_1& operator=(ICollectionDebugView_1&& o) noexcept = default;
  constexpr ICollectionDebugView_1& operator=(ICollectionDebugView_1 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::ICollectionDebugView_1, "System.Collections.Generic", "ICollectionDebugView`1");
