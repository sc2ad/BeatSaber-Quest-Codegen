#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
struct EventAttributes;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
struct MonoEventInfo;
}
// Type: System.Reflection::MonoEventInfo
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3510))
// CS Name: System.Reflection.MonoEventInfo
struct CORDL_TYPE MonoEventInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "declaring_type", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "reflected_type", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "add_method", ty: "System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "remove_method", ty: "System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "raise_method", ty: "System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "attrs", ty: "System::Reflection::EventAttributes", modifiers: "", def_value: None }, CppParam { name: "other_methods", ty: "::ArrayW<System::Reflection::MethodInfo>", modifiers: "", def_value: None }]
constexpr MonoEventInfo(System::Type declaring_type, System::Type reflected_type, ::StringW name, System::Reflection::MethodInfo add_method, System::Reflection::MethodInfo remove_method, System::Reflection::MethodInfo raise_method, System::Reflection::EventAttributes attrs, ::ArrayW<System::Reflection::MethodInfo> other_methods) noexcept;


                    constexpr MonoEventInfo(MonoEventInfo const&) = default;
                    constexpr MonoEventInfo(MonoEventInfo&&) = default;
                    constexpr MonoEventInfo& operator=(MonoEventInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MonoEventInfo& operator=(MonoEventInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MonoEventInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Type __declspec(property(get=__get_declaring_type, put=__set_declaring_type))  declaring_type;

constexpr void __set_declaring_type(System::Type value) ;

constexpr System::Type __get_declaring_type() const;

 System::Type __declspec(property(get=__get_reflected_type, put=__set_reflected_type))  reflected_type;

constexpr void __set_reflected_type(System::Type value) ;

constexpr System::Type __get_reflected_type() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 System::Reflection::MethodInfo __declspec(property(get=__get_add_method, put=__set_add_method))  add_method;

constexpr void __set_add_method(System::Reflection::MethodInfo value) ;

constexpr System::Reflection::MethodInfo __get_add_method() const;

 System::Reflection::MethodInfo __declspec(property(get=__get_remove_method, put=__set_remove_method))  remove_method;

constexpr void __set_remove_method(System::Reflection::MethodInfo value) ;

constexpr System::Reflection::MethodInfo __get_remove_method() const;

 System::Reflection::MethodInfo __declspec(property(get=__get_raise_method, put=__set_raise_method))  raise_method;

constexpr void __set_raise_method(System::Reflection::MethodInfo value) ;

constexpr System::Reflection::MethodInfo __get_raise_method() const;

 System::Reflection::EventAttributes __declspec(property(get=__get_attrs, put=__set_attrs))  attrs;

constexpr void __set_attrs(System::Reflection::EventAttributes value) ;

constexpr System::Reflection::EventAttributes __get_attrs() const;

 ::ArrayW<System::Reflection::MethodInfo> __declspec(property(get=__get_other_methods, put=__set_other_methods))  other_methods;

constexpr void __set_other_methods(::ArrayW<System::Reflection::MethodInfo> value) ;

constexpr ::ArrayW<System::Reflection::MethodInfo> __get_other_methods() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoEventInfo, "System.Reflection", "MonoEventInfo");
