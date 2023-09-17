#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
struct BindingId;
}
// Type: Zenject::BindingId
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11100))
// CS Name: Zenject.BindingId
struct CORDL_TYPE BindingId : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::Zenject::BindingId>
constexpr operator  ::System::IEquatable_1<::Zenject::BindingId>() const;

// Ctor Parameters [CppParam { name: "_type", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "_identifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr BindingId(::System::Type _type, ::bs_hook::Il2CppWrapperType _identifier) noexcept;


                    constexpr BindingId(BindingId const&) = default;
                    constexpr BindingId(BindingId&&) = default;
                    constexpr BindingId& operator=(BindingId const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BindingId& operator=(BindingId&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BindingId(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Type __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(::System::Type value) ;

constexpr ::System::Type __get__type() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__identifier, put=__set__identifier))  _identifier;

constexpr void __set__identifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__identifier() const;


// Properties

 ::System::Type __declspec(property(get=get_Type, put=set_Type))  Type;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Identifier, put=set_Identifier))  Identifier;


// Methods

/// @brief Method .ctor addr 0x2d6bf1c size 0x8 virtual false final false
 void _ctor(::System::Type type, ::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method get_Type addr 0x2d7cd10 size 0x8 virtual false final false
 ::System::Type get_Type() ;

/// @brief Method set_Type addr 0x2d7cd18 size 0x8 virtual false final false
 void set_Type(::System::Type value) ;

/// @brief Method get_Identifier addr 0x2d7cd20 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Identifier() ;

/// @brief Method set_Identifier addr 0x2d7cd28 size 0x8 virtual false final false
 void set_Identifier(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToString addr 0x2d7cd30 size 0x120 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2d7ce50 size 0x50 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2d7cea0 size 0x84 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2d7cfc8 size 0x18 virtual true final true
 bool Equals(::Zenject::BindingId that) ;

/// @brief Method op_Equality addr 0x2d7cf24 size 0xa4 virtual false final false
static bool op_Equality(::Zenject::BindingId left, ::Zenject::BindingId right) ;

/// @brief Method op_Inequality addr 0x2d7cfe0 size 0x18 virtual false final false
static bool op_Inequality(::Zenject::BindingId left, ::Zenject::BindingId right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindingId, "Zenject", "BindingId");
