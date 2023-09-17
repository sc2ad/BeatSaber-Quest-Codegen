#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Threading {
template<typename T>
class SparselyPopulatedArrayFragment_1;
}
// Forward declare root types
namespace System::Threading {
template<typename T>
struct SparselyPopulatedArrayAddInfo_1;
}
namespace System::Threading {
template<::cordl_internals::il2cpp_reference_type T>
struct SparselyPopulatedArrayAddInfo_1<T>;
}
// Type: System.Threading::SparselyPopulatedArrayAddInfo`1
// Type: System.Threading::SparselyPopulatedArrayAddInfo`1
namespace System::Threading {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2692))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2692), inst: 2 })
// CS Name: System.Threading.SparselyPopulatedArrayAddInfo`1
struct CORDL_TYPE SparselyPopulatedArrayAddInfo_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_source", ty: "::System::Threading::SparselyPopulatedArrayFragment_1<T>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SparselyPopulatedArrayAddInfo_1(::System::Threading::SparselyPopulatedArrayFragment_1<T> _source, int32_t _index) noexcept;


                    constexpr SparselyPopulatedArrayAddInfo_1(SparselyPopulatedArrayAddInfo_1 const&) = default;
                    constexpr SparselyPopulatedArrayAddInfo_1(SparselyPopulatedArrayAddInfo_1&&) = default;
                    constexpr SparselyPopulatedArrayAddInfo_1& operator=(SparselyPopulatedArrayAddInfo_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SparselyPopulatedArrayAddInfo_1& operator=(SparselyPopulatedArrayAddInfo_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SparselyPopulatedArrayAddInfo_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::SparselyPopulatedArrayFragment_1<T> __declspec(property(get=__get__source, put=__set__source))  _source;

constexpr void __set__source(::System::Threading::SparselyPopulatedArrayFragment_1<T> value) ;

constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T> __get__source() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Properties

 ::System::Threading::SparselyPopulatedArrayFragment_1<T> __declspec(property(get=get_Source))  Source;

 int32_t __declspec(property(get=get_Index))  Index;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::SparselyPopulatedArrayFragment_1<T> source, int32_t index) ;

/// @brief Method get_Source addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::SparselyPopulatedArrayFragment_1<T> get_Source() ;

/// @brief Method get_Index addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Index() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::SparselyPopulatedArrayAddInfo_1, "System.Threading", "SparselyPopulatedArrayAddInfo`1");
