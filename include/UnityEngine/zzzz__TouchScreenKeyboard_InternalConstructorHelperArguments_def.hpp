#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct TouchScreenKeyboard_InternalConstructorHelperArguments;
}
// Type: UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10124))
// CS Name: UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
struct CORDL_TYPE TouchScreenKeyboard_InternalConstructorHelperArguments : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "keyboardType", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "autocorrection", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "multiline", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "secure", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "alert", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "characterLimit", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchScreenKeyboard_InternalConstructorHelperArguments(uint32_t keyboardType, uint32_t autocorrection, uint32_t multiline, uint32_t secure, uint32_t alert, int32_t characterLimit) noexcept;


                    constexpr TouchScreenKeyboard_InternalConstructorHelperArguments(TouchScreenKeyboard_InternalConstructorHelperArguments const&) = default;
                    constexpr TouchScreenKeyboard_InternalConstructorHelperArguments(TouchScreenKeyboard_InternalConstructorHelperArguments&&) = default;
                    constexpr TouchScreenKeyboard_InternalConstructorHelperArguments& operator=(TouchScreenKeyboard_InternalConstructorHelperArguments const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TouchScreenKeyboard_InternalConstructorHelperArguments& operator=(TouchScreenKeyboard_InternalConstructorHelperArguments&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TouchScreenKeyboard_InternalConstructorHelperArguments(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_keyboardType, put=__set_keyboardType))  keyboardType;

constexpr void __set_keyboardType(uint32_t value) ;

constexpr uint32_t __get_keyboardType() const;

 uint32_t __declspec(property(get=__get_autocorrection, put=__set_autocorrection))  autocorrection;

constexpr void __set_autocorrection(uint32_t value) ;

constexpr uint32_t __get_autocorrection() const;

 uint32_t __declspec(property(get=__get_multiline, put=__set_multiline))  multiline;

constexpr void __set_multiline(uint32_t value) ;

constexpr uint32_t __get_multiline() const;

 uint32_t __declspec(property(get=__get_secure, put=__set_secure))  secure;

constexpr void __set_secure(uint32_t value) ;

constexpr uint32_t __get_secure() const;

 uint32_t __declspec(property(get=__get_alert, put=__set_alert))  alert;

constexpr void __set_alert(uint32_t value) ;

constexpr uint32_t __get_alert() const;

 int32_t __declspec(property(get=__get_characterLimit, put=__set_characterLimit))  characterLimit;

constexpr void __set_characterLimit(int32_t value) ;

constexpr int32_t __get_characterLimit() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments, "UnityEngine", "TouchScreenKeyboard_InternalConstructorHelperArguments");
