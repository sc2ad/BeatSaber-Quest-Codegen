#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace Newtonsoft::Json::Linq {
template<typename T>
class IJEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
template<typename T>
struct JEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
template<::cordl_internals::il2cpp_reference_type T>
struct JEnumerable_1<T>;
}
// Type: Newtonsoft.Json.Linq::JEnumerable`1
// Type: Newtonsoft.Json.Linq::JEnumerable`1
namespace Newtonsoft::Json::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11931)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11931), inst: 2 })
// CS Name: Newtonsoft.Json.Linq.JEnumerable`1
struct CORDL_TYPE JEnumerable_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Linq::IJEnumerable_1<T>
constexpr operator  Newtonsoft::Json::Linq::IJEnumerable_1<T>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "_enumerable", ty: "System::Collections::Generic::IEnumerable_1<T>", modifiers: "", def_value: None }]
constexpr JEnumerable_1(System::Collections::Generic::IEnumerable_1<T> _enumerable) noexcept;


                    constexpr JEnumerable_1(JEnumerable_1 const&) = default;
                    constexpr JEnumerable_1(JEnumerable_1&&) = default;
                    constexpr JEnumerable_1& operator=(JEnumerable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr JEnumerable_1& operator=(JEnumerable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit JEnumerable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static Newtonsoft::Json::Linq::JEnumerable_1<T> __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(Newtonsoft::Json::Linq::JEnumerable_1<T> value) ;

static Newtonsoft::Json::Linq::JEnumerable_1<T> __get_Empty() ;

 System::Collections::Generic::IEnumerable_1<T> __declspec(property(get=__get__enumerable, put=__set__enumerable))  _enumerable;

constexpr void __set__enumerable(System::Collections::Generic::IEnumerable_1<T> value) ;

constexpr System::Collections::Generic::IEnumerable_1<T> __get__enumerable() const;


// Properties

 Newtonsoft::Json::Linq::IJEnumerable_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<T> enumerable) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 Newtonsoft::Json::Linq::IJEnumerable_1<Newtonsoft::Json::Linq::JToken> get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Equals(Newtonsoft::Json::Linq::JEnumerable_1<T> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(Newtonsoft::Json::Linq::JEnumerable_1, "Newtonsoft.Json.Linq", "JEnumerable`1");
