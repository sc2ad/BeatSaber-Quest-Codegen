#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Collections::Concurrent {
template<typename T>
class IProducerConsumerCollectionDebugView_1;
}
// Type: System.Collections.Concurrent::IProducerConsumerCollectionDebugView`1
namespace System::Collections::Concurrent {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3798))
// CS Name: System.Collections.Concurrent.IProducerConsumerCollectionDebugView`1
class CORDL_TYPE IProducerConsumerCollectionDebugView_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IProducerConsumerCollectionDebugView_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "IProducerConsumerCollectionDebugView_1", modifiers: " const&", def_value: None }]
constexpr IProducerConsumerCollectionDebugView_1(IProducerConsumerCollectionDebugView_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IProducerConsumerCollectionDebugView_1", modifiers: "&&", def_value: None }]
constexpr IProducerConsumerCollectionDebugView_1(IProducerConsumerCollectionDebugView_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IProducerConsumerCollectionDebugView_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IProducerConsumerCollectionDebugView_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IProducerConsumerCollectionDebugView_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IProducerConsumerCollectionDebugView_1& operator=(IProducerConsumerCollectionDebugView_1&& o) noexcept = default;
  constexpr IProducerConsumerCollectionDebugView_1& operator=(IProducerConsumerCollectionDebugView_1 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::IProducerConsumerCollectionDebugView_1, "System.Collections.Concurrent", "IProducerConsumerCollectionDebugView`1");
