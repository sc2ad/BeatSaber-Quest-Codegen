#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Quaternion;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Extensions;
}
// Type: HoudiniEngineUnity::HEU_Extensions
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9762))
// CS Name: HoudiniEngineUnity.HEU_Extensions
class CORDL_TYPE HEU_Extensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_Extensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Extensions", modifiers: " const&", def_value: None }]
constexpr HEU_Extensions(HEU_Extensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Extensions", modifiers: "&&", def_value: None }]
constexpr HEU_Extensions(HEU_Extensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_Extensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_Extensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_Extensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_Extensions& operator=(HEU_Extensions&& o) noexcept = default;
  constexpr HEU_Extensions& operator=(HEU_Extensions const& o) noexcept = default;
                


// Methods

/// @brief Method Map addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename R>
static ::System::Collections::Generic::List_1<R> Map(::System::Collections::Generic::IEnumerable_1<T> self, ::System::Func_2<T,R> selector) ;

/// @brief Method Reduce addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Reduce(::System::Collections::Generic::IEnumerable_1<T> self, ::System::Func_3<T,T,T> func) ;

/// @brief Method Filter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::System::Collections::Generic::List_1<T> Filter(::System::Collections::Generic::IEnumerable_1<T> self, ::System::Func_2<T,bool> predicate) ;

/// @brief Method IsValidIndex addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool IsValidIndex(::System::Collections::Generic::List_1<T> self, int32_t index) ;

/// @brief Method IsEquivalentList addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool IsEquivalentList(::System::Collections::Generic::List_1<T> self, ::System::Collections::Generic::List_1<T> other) ;

/// @brief Method ApproximatelyEquals addr 0x2042774 size 0x3c virtual false final false
static bool ApproximatelyEquals(::UnityEngine::Quaternion quatA, ::UnityEngine::Quaternion value) ;

/// @brief Method ConvertList addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename U>
static ::System::Collections::Generic::List_1<U> ConvertList(::System::Collections::Generic::List_1<T> self) ;

/// @brief Method ConvertListToEquivable addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivable_1<T>> ConvertListToEquivable(::System::Collections::Generic::List_1<T> self) ;

/// @brief Method ConvertArrayToEquivable addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<::HoudiniEngineUnity::IEquivable_1<T>> ConvertArrayToEquivable(::ArrayW<T> self) ;

/// @brief Method ApproximatelyEquals addr 0x20427b0 size 0x10 virtual false final false
static bool ApproximatelyEquals(float_t self, float_t other, float_t epsilon) ;

/// @brief Method AsByteArray addr 0x20427c0 size 0x78 virtual false final false
static ::ArrayW<uint8_t> AsByteArray(::StringW self) ;

/// @brief Method AsString addr 0x2042838 size 0x80 virtual false final false
static ::StringW AsString(::ArrayW<uint8_t> buffer) ;

/// @brief Method SwapXAndY addr 0x20428b8 size 0x10 virtual false final false
static ::UnityEngine::Vector3 SwapXAndY(::UnityEngine::Vector3 self) ;

/// @brief Method SwapXAndZ addr 0x20428c8 size 0x10 virtual false final false
static ::UnityEngine::Vector3 SwapXAndZ(::UnityEngine::Vector3 self) ;

/// @brief Method SwapYAndZ addr 0x20428d8 size 0x10 virtual false final false
static ::UnityEngine::Vector3 SwapYAndZ(::UnityEngine::Vector3 self) ;

/// @brief Method DecomposeToPosition addr 0x20428e8 size 0xc virtual false final false
static ::UnityEngine::Vector3 DecomposeToPosition(::UnityEngine::Matrix4x4 self) ;

/// @brief Method DecomposeToRotation addr 0x20428f4 size 0x64 virtual false final false
static ::UnityEngine::Quaternion DecomposeToRotation(::UnityEngine::Matrix4x4 self) ;

/// @brief Method DecomposeToScale addr 0x2042958 size 0x194 virtual false final false
static ::UnityEngine::Vector3 DecomposeToScale(::UnityEngine::Matrix4x4 self) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Extensions, "HoudiniEngineUnity", "HEU_Extensions");
