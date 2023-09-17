#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace System::Threading {
class Lock;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Threading {
struct LockHolder;
}
// Type: System.Threading::LockHolder
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2694))
// CS Name: System.Threading.LockHolder
struct CORDL_TYPE LockHolder : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "_lock", ty: "::System::Threading::Lock", modifiers: "", def_value: None }]
constexpr LockHolder(::System::Threading::Lock _lock) noexcept;


                    constexpr LockHolder(LockHolder const&) = default;
                    constexpr LockHolder(LockHolder&&) = default;
                    constexpr LockHolder& operator=(LockHolder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LockHolder& operator=(LockHolder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LockHolder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Lock __declspec(property(get=__get__lock, put=__set__lock))  _lock;

constexpr void __set__lock(::System::Threading::Lock value) ;

constexpr ::System::Threading::Lock __get__lock() const;


// Methods

/// @brief Method Hold addr 0x24a6c64 size 0x24 virtual false final false
static ::System::Threading::LockHolder Hold(::System::Threading::Lock l) ;

/// @brief Method Dispose addr 0x24a6c90 size 0x1c virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LockHolder, "System.Threading", "LockHolder");
