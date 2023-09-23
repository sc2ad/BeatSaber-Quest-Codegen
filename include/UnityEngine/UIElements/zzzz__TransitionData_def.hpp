#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleDataGroup_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TransitionData;
}
// Type: UnityEngine.UIElements::TransitionData
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7460))
// CS Name: UnityEngine.UIElements.TransitionData
struct CORDL_TYPE TransitionData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IStyleDataGroup_1<UnityEngine::UIElements::TransitionData>
constexpr operator  UnityEngine::UIElements::IStyleDataGroup_1<UnityEngine::UIElements::TransitionData>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::TransitionData>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::TransitionData>() const;

// Ctor Parameters [CppParam { name: "transitionDelay", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue>", modifiers: "", def_value: None }, CppParam { name: "transitionDuration", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue>", modifiers: "", def_value: None }, CppParam { name: "transitionProperty", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName>", modifiers: "", def_value: None }, CppParam { name: "transitionTimingFunction", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction>", modifiers: "", def_value: None }]
constexpr TransitionData(System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> transitionDelay, System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> transitionDuration, System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> transitionProperty, System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction> transitionTimingFunction) noexcept;


                    constexpr TransitionData(TransitionData const&) = default;
                    constexpr TransitionData(TransitionData&&) = default;
                    constexpr TransitionData& operator=(TransitionData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TransitionData& operator=(TransitionData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TransitionData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> __declspec(property(get=__get_transitionDelay, put=__set_transitionDelay))  transitionDelay;

constexpr void __set_transitionDelay(System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> __get_transitionDelay() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> __declspec(property(get=__get_transitionDuration, put=__set_transitionDuration))  transitionDuration;

constexpr void __set_transitionDuration(System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> __get_transitionDuration() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> __declspec(property(get=__get_transitionProperty, put=__set_transitionProperty))  transitionProperty;

constexpr void __set_transitionProperty(System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> __get_transitionProperty() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction> __declspec(property(get=__get_transitionTimingFunction, put=__set_transitionTimingFunction))  transitionTimingFunction;

constexpr void __set_transitionTimingFunction(System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction> __get_transitionTimingFunction() const;


// Methods

/// @brief Method Copy addr 0x2d0e458 size 0x144 virtual true final true
 UnityEngine::UIElements::TransitionData Copy() ;

/// @brief Method CopyFrom addr 0x2d0e59c size 0x160 virtual true final true
 void CopyFrom(ByRef<UnityEngine::UIElements::TransitionData> other) ;

/// @brief Method op_Equality addr 0x2d0e6fc size 0x4c virtual false final false
static bool op_Equality(UnityEngine::UIElements::TransitionData lhs, UnityEngine::UIElements::TransitionData rhs) ;

/// @brief Method Equals addr 0x2d0e748 size 0x4c virtual true final true
 bool Equals(UnityEngine::UIElements::TransitionData other) ;

/// @brief Method Equals addr 0x2d0e794 size 0xb0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2d0e844 size 0x9c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TransitionData, "UnityEngine.UIElements", "TransitionData");
