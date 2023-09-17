#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
template<typename T>
class IObserver_1;
}
// Type: System::IObserver`1
namespace System {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2419))
// CS Name: System.IObserver`1
class CORDL_TYPE IObserver_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IObserver_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IObserver_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnNext addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnNext(T value) ;

/// @brief Method OnError addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnError(::System::Exception error) ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnCompleted() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IObserver_1, "System", "IObserver`1");
