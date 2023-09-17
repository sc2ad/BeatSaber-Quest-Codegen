#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace System {
class Type;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
struct PropertyAttributes;
}
// Forward declare root types
namespace System::Reflection {
struct MonoPropertyInfo;
}
// Type: System.Reflection::MonoPropertyInfo
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3519))
// CS Name: System.Reflection.MonoPropertyInfo
struct CORDL_TYPE MonoPropertyInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "parent", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "declaring_type", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "get_method", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "set_method", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "attrs", ty: "::System::Reflection::PropertyAttributes", modifiers: "", def_value: None }]
constexpr MonoPropertyInfo(::System::Type parent, ::System::Type declaring_type, ::StringW name, ::System::Reflection::MethodInfo get_method, ::System::Reflection::MethodInfo set_method, ::System::Reflection::PropertyAttributes attrs) noexcept;


                    constexpr MonoPropertyInfo(MonoPropertyInfo const&) = default;
                    constexpr MonoPropertyInfo(MonoPropertyInfo&&) = default;
                    constexpr MonoPropertyInfo& operator=(MonoPropertyInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MonoPropertyInfo& operator=(MonoPropertyInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MonoPropertyInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Type __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Type value) ;

constexpr ::System::Type __get_parent() const;

 ::System::Type __declspec(property(get=__get_declaring_type, put=__set_declaring_type))  declaring_type;

constexpr void __set_declaring_type(::System::Type value) ;

constexpr ::System::Type __get_declaring_type() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::System::Reflection::MethodInfo __declspec(property(get=__get_get_method, put=__set_get_method))  get_method;

constexpr void __set_get_method(::System::Reflection::MethodInfo value) ;

constexpr ::System::Reflection::MethodInfo __get_get_method() const;

 ::System::Reflection::MethodInfo __declspec(property(get=__get_set_method, put=__set_set_method))  set_method;

constexpr void __set_set_method(::System::Reflection::MethodInfo value) ;

constexpr ::System::Reflection::MethodInfo __get_set_method() const;

 ::System::Reflection::PropertyAttributes __declspec(property(get=__get_attrs, put=__set_attrs))  attrs;

constexpr void __set_attrs(::System::Reflection::PropertyAttributes value) ;

constexpr ::System::Reflection::PropertyAttributes __get_attrs() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoPropertyInfo, "System.Reflection", "MonoPropertyInfo");
