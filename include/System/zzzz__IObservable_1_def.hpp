#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IObserver_1;
}
// Forward declare root types
namespace System {
template<typename T>
class IObservable_1;
}
// Type: System::IObservable`1
namespace System {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2418))
// CS Name: System.IObservable`1
class CORDL_TYPE IObservable_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IObservable_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IObservable_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::IDisposable Subscribe(::System::IObserver_1<T> observer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IObservable_1, "System", "IObservable`1");
