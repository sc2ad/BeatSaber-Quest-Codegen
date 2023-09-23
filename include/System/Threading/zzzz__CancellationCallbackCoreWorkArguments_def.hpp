#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading {
template<typename T>
class SparselyPopulatedArrayFragment_1;
}
namespace System::Threading {
class CancellationCallbackInfo;
}
// Forward declare root types
namespace System::Threading {
struct CancellationCallbackCoreWorkArguments;
}
// Type: System.Threading::CancellationCallbackCoreWorkArguments
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2688))
// CS Name: System.Threading.CancellationCallbackCoreWorkArguments
struct CORDL_TYPE CancellationCallbackCoreWorkArguments : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_currArrayFragment", ty: "System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo>", modifiers: "", def_value: None }, CppParam { name: "_currArrayIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CancellationCallbackCoreWorkArguments(System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo> _currArrayFragment, int32_t _currArrayIndex) noexcept;


                    constexpr CancellationCallbackCoreWorkArguments(CancellationCallbackCoreWorkArguments const&) = default;
                    constexpr CancellationCallbackCoreWorkArguments(CancellationCallbackCoreWorkArguments&&) = default;
                    constexpr CancellationCallbackCoreWorkArguments& operator=(CancellationCallbackCoreWorkArguments const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CancellationCallbackCoreWorkArguments& operator=(CancellationCallbackCoreWorkArguments&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CancellationCallbackCoreWorkArguments(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo> __declspec(property(get=__get__currArrayFragment, put=__set__currArrayFragment))  _currArrayFragment;

constexpr void __set__currArrayFragment(System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo> value) ;

constexpr System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo> __get__currArrayFragment() const;

 int32_t __declspec(property(get=__get__currArrayIndex, put=__set__currArrayIndex))  _currArrayIndex;

constexpr void __set__currArrayIndex(int32_t value) ;

constexpr int32_t __get__currArrayIndex() const;


// Methods

/// @brief Method .ctor addr 0x24a607c size 0xc virtual false final false
 void _ctor(System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo> currArrayFragment, int32_t currArrayIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(System::Threading::CancellationCallbackCoreWorkArguments, "System.Threading", "CancellationCallbackCoreWorkArguments");
