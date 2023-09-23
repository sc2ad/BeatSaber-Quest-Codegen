#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class DictionaryKeyCollectionDebugView_2;
}
// Type: System.Collections.Generic::DictionaryKeyCollectionDebugView`2
namespace System::Collections::Generic {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3815))
// CS Name: System.Collections.Generic.DictionaryKeyCollectionDebugView`2
class CORDL_TYPE DictionaryKeyCollectionDebugView_2 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DictionaryKeyCollectionDebugView_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryKeyCollectionDebugView_2", modifiers: " const&", def_value: None }]
constexpr DictionaryKeyCollectionDebugView_2(DictionaryKeyCollectionDebugView_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryKeyCollectionDebugView_2", modifiers: "&&", def_value: None }]
constexpr DictionaryKeyCollectionDebugView_2(DictionaryKeyCollectionDebugView_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DictionaryKeyCollectionDebugView_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DictionaryKeyCollectionDebugView_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DictionaryKeyCollectionDebugView_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DictionaryKeyCollectionDebugView_2& operator=(DictionaryKeyCollectionDebugView_2&& o) noexcept = default;
  constexpr DictionaryKeyCollectionDebugView_2& operator=(DictionaryKeyCollectionDebugView_2 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::DictionaryKeyCollectionDebugView_2, "System.Collections.Generic", "DictionaryKeyCollectionDebugView`2");
