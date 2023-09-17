#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Collections {
struct NativeArrayDispose;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeArrayDisposeJob;
}
// Type: Unity.Collections::NativeArrayDisposeJob
namespace Unity::Collections {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9943))
// CS Name: Unity.Collections.NativeArrayDisposeJob
struct CORDL_TYPE NativeArrayDisposeJob : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::Unity::Jobs::IJob
constexpr operator  ::Unity::Jobs::IJob() const;

// Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeArrayDispose", modifiers: "", def_value: None }]
constexpr NativeArrayDisposeJob(::Unity::Collections::NativeArrayDispose Data) noexcept;


                    constexpr NativeArrayDisposeJob(NativeArrayDisposeJob const&) = default;
                    constexpr NativeArrayDisposeJob(NativeArrayDisposeJob&&) = default;
                    constexpr NativeArrayDisposeJob& operator=(NativeArrayDisposeJob const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArrayDisposeJob& operator=(NativeArrayDisposeJob&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArrayDisposeJob(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::Unity::Collections::NativeArrayDispose __declspec(property(get=__get_Data, put=__set_Data))  Data;

constexpr void __set_Data(::Unity::Collections::NativeArrayDispose value) ;

constexpr ::Unity::Collections::NativeArrayDispose __get_Data() const;


// Methods

/// @brief Method Execute addr 0x2b28538 size 0x44 virtual true final true
 void Execute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeArrayDisposeJob, "Unity.Collections", "NativeArrayDisposeJob");
