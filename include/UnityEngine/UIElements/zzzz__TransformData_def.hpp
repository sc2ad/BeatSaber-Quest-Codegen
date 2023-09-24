#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleDataGroup_1;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TransformData;
}
// Type: UnityEngine.UIElements::TransformData
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7459))
// CS Name: UnityEngine.UIElements.TransformData
struct CORDL_TYPE TransformData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IStyleDataGroup_1<UnityEngine::UIElements::TransformData>
constexpr operator  UnityEngine::UIElements::IStyleDataGroup_1<UnityEngine::UIElements::TransformData>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::TransformData>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::TransformData>() const;

// Ctor Parameters [CppParam { name: "rotate", ty: "UnityEngine::UIElements::Rotate", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "UnityEngine::UIElements::Scale", modifiers: "", def_value: None }, CppParam { name: "transformOrigin", ty: "UnityEngine::UIElements::TransformOrigin", modifiers: "", def_value: None }, CppParam { name: "translate", ty: "UnityEngine::UIElements::Translate", modifiers: "", def_value: None }]
constexpr TransformData(UnityEngine::UIElements::Rotate rotate, UnityEngine::UIElements::Scale scale, UnityEngine::UIElements::TransformOrigin transformOrigin, UnityEngine::UIElements::Translate translate) noexcept;


                    constexpr TransformData(TransformData const&) = default;
                    constexpr TransformData(TransformData&&) = default;
                    constexpr TransformData& operator=(TransformData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TransformData& operator=(TransformData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x54};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TransformData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::Rotate __declspec(property(get=__get_rotate, put=__set_rotate))  rotate;

constexpr void __set_rotate(UnityEngine::UIElements::Rotate value) ;

constexpr UnityEngine::UIElements::Rotate __get_rotate() const;

 UnityEngine::UIElements::Scale __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(UnityEngine::UIElements::Scale value) ;

constexpr UnityEngine::UIElements::Scale __get_scale() const;

 UnityEngine::UIElements::TransformOrigin __declspec(property(get=__get_transformOrigin, put=__set_transformOrigin))  transformOrigin;

constexpr void __set_transformOrigin(UnityEngine::UIElements::TransformOrigin value) ;

constexpr UnityEngine::UIElements::TransformOrigin __get_transformOrigin() const;

 UnityEngine::UIElements::Translate __declspec(property(get=__get_translate, put=__set_translate))  translate;

constexpr void __set_translate(UnityEngine::UIElements::Translate value) ;

constexpr UnityEngine::UIElements::Translate __get_translate() const;


// Methods

/// @brief Method Copy addr 0x2d0e1b8 size 0x1c virtual true final true
 UnityEngine::UIElements::TransformData Copy() ;

/// @brief Method CopyFrom addr 0x2d0e1d4 size 0x14 virtual true final true
 void CopyFrom(ByRef<UnityEngine::UIElements::TransformData> other) ;

/// @brief Method op_Equality addr 0x2d0e1e8 size 0x128 virtual false final false
static bool op_Equality(UnityEngine::UIElements::TransformData lhs, UnityEngine::UIElements::TransformData rhs) ;

/// @brief Method Equals addr 0x2d0e310 size 0x44 virtual true final true
 bool Equals(UnityEngine::UIElements::TransformData other) ;

/// @brief Method Equals addr 0x2d0e354 size 0xa0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2d0e3f4 size 0x64 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TransformData, "UnityEngine.UIElements", "TransformData");
