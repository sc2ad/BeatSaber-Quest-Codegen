#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Collections::Concurrent {
template<typename K,typename V>
class IDictionaryDebugView_2;
}
// Type: System.Collections.Concurrent::IDictionaryDebugView`2
namespace System::Collections::Concurrent {
// cpp template
template<typename K,typename V>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3796))
// CS Name: System.Collections.Concurrent.IDictionaryDebugView`2
class CORDL_TYPE IDictionaryDebugView_2 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IDictionaryDebugView_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "IDictionaryDebugView_2", modifiers: " const&", def_value: None }]
constexpr IDictionaryDebugView_2(IDictionaryDebugView_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IDictionaryDebugView_2", modifiers: "&&", def_value: None }]
constexpr IDictionaryDebugView_2(IDictionaryDebugView_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDictionaryDebugView_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IDictionaryDebugView_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IDictionaryDebugView_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IDictionaryDebugView_2& operator=(IDictionaryDebugView_2&& o) noexcept = default;
  constexpr IDictionaryDebugView_2& operator=(IDictionaryDebugView_2 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::IDictionaryDebugView_2, "System.Collections.Concurrent", "IDictionaryDebugView`2");
