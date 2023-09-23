#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class DictionaryValueCollectionDebugView_2;
}
// Type: System.Collections.Generic::DictionaryValueCollectionDebugView`2
namespace System::Collections::Generic {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3816))
// CS Name: System.Collections.Generic.DictionaryValueCollectionDebugView`2
class CORDL_TYPE DictionaryValueCollectionDebugView_2 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DictionaryValueCollectionDebugView_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryValueCollectionDebugView_2", modifiers: " const&", def_value: None }]
constexpr DictionaryValueCollectionDebugView_2(DictionaryValueCollectionDebugView_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryValueCollectionDebugView_2", modifiers: "&&", def_value: None }]
constexpr DictionaryValueCollectionDebugView_2(DictionaryValueCollectionDebugView_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DictionaryValueCollectionDebugView_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DictionaryValueCollectionDebugView_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DictionaryValueCollectionDebugView_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DictionaryValueCollectionDebugView_2& operator=(DictionaryValueCollectionDebugView_2&& o) noexcept = default;
  constexpr DictionaryValueCollectionDebugView_2& operator=(DictionaryValueCollectionDebugView_2 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::DictionaryValueCollectionDebugView_2, "System.Collections.Generic", "DictionaryValueCollectionDebugView`2");
