#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class CuttableBySaber;
}
namespace System::Collections {
class IComparer;
}
namespace UnityEngine {
class Collider;
}
namespace GlobalNamespace {
class Saber;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__NoteCutter__CuttableBySaberSortParams;
}
namespace GlobalNamespace {
class GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer;
}
namespace GlobalNamespace {
class NoteCutter;
}
// Type: ::CuttableBySaberSortParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5379))
// CS Name: NoteCutter::CuttableBySaberSortParams
class CORDL_TYPE GlobalNamespace__NoteCutter__CuttableBySaberSortParams : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__NoteCutter__CuttableBySaberSortParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NoteCutter__CuttableBySaberSortParams", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__NoteCutter__CuttableBySaberSortParams(GlobalNamespace__NoteCutter__CuttableBySaberSortParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NoteCutter__CuttableBySaberSortParams", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__NoteCutter__CuttableBySaberSortParams(GlobalNamespace__NoteCutter__CuttableBySaberSortParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NoteCutter__CuttableBySaberSortParams(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__NoteCutter__CuttableBySaberSortParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__NoteCutter__CuttableBySaberSortParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__NoteCutter__CuttableBySaberSortParams& operator=(GlobalNamespace__NoteCutter__CuttableBySaberSortParams&& o) noexcept = default;
  constexpr GlobalNamespace__NoteCutter__CuttableBySaberSortParams& operator=(GlobalNamespace__NoteCutter__CuttableBySaberSortParams const& o) noexcept = default;
                


// Fields

 GlobalNamespace::CuttableBySaber __declspec(property(get=__get_cuttableBySaber, put=__set_cuttableBySaber))  cuttableBySaber;

constexpr void __set_cuttableBySaber(GlobalNamespace::CuttableBySaber value) ;

constexpr GlobalNamespace::CuttableBySaber __get_cuttableBySaber() const;

 float_t __declspec(property(get=__get_distance, put=__set_distance))  distance;

constexpr void __set_distance(float_t value) ;

constexpr float_t __get_distance() const;

 UnityEngine::Vector3 __declspec(property(get=__get_pos, put=__set_pos))  pos;

constexpr void __set_pos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_pos() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__NoteCutter__CuttableBySaberSortParams() ;

/// @brief Method .ctor addr 0x210b40c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CuttableBySaberSortParamsComparer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5380))
// CS Name: NoteCutter::CuttableBySaberSortParamsComparer
class CORDL_TYPE GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IComparer
constexpr operator  System::Collections::IComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer(GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer(GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer& operator=(GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer&& o) noexcept = default;
  constexpr GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer& operator=(GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x210b414 size 0x124 virtual true final true
 int32_t Compare(::bs_hook::Il2CppWrapperType p0, ::bs_hook::Il2CppWrapperType p1) ;

// Ctor Parameters []
explicit GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer() ;

/// @brief Method .ctor addr 0x210b404 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteCutter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5381))
// CS Name: NoteCutter
class CORDL_TYPE NoteCutter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CuttableBySaberSortParamsComparer = GlobalNamespace::GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer;

using CuttableBySaberSortParams = GlobalNamespace::GlobalNamespace__NoteCutter__CuttableBySaberSortParams;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NoteCutter() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutter", modifiers: " const&", def_value: None }]
constexpr NoteCutter(NoteCutter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutter", modifiers: "&&", def_value: None }]
constexpr NoteCutter(NoteCutter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteCutter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NoteCutter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteCutter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteCutter& operator=(NoteCutter&& o) noexcept = default;
  constexpr NoteCutter& operator=(NoteCutter const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxNumberOfColliders offset 0
static constexpr int32_t  kMaxNumberOfColliders{16};

 ::ArrayW<UnityEngine::Collider> __declspec(property(get=__get__colliders, put=__set__colliders))  _colliders;

constexpr void __set__colliders(::ArrayW<UnityEngine::Collider> value) ;

constexpr ::ArrayW<UnityEngine::Collider> __get__colliders() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__NoteCutter__CuttableBySaberSortParams> __declspec(property(get=__get__cuttableBySaberSortParams, put=__set__cuttableBySaberSortParams))  _cuttableBySaberSortParams;

constexpr void __set__cuttableBySaberSortParams(::ArrayW<GlobalNamespace::GlobalNamespace__NoteCutter__CuttableBySaberSortParams> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__NoteCutter__CuttableBySaberSortParams> __get__cuttableBySaberSortParams() const;

 GlobalNamespace::GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(GlobalNamespace::GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer value) ;

constexpr GlobalNamespace::GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer __get__comparer() const;


// Methods

// Ctor Parameters []
explicit NoteCutter() ;

/// @brief Method .ctor addr 0x210b2cc size 0x138 virtual false final false
 void _ctor() ;

/// @brief Method Cut addr 0x210ac9c size 0x524 virtual false final false
 void Cut(GlobalNamespace::Saber saber) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__NoteCutter__CuttableBySaberSortParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NoteCutter__CuttableBySaberSortParams, "", "NoteCutter/CuttableBySaberSortParams");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NoteCutter__CuttableBySaberSortParamsComparer, "", "NoteCutter/CuttableBySaberSortParamsComparer");
NEED_NO_BOX(GlobalNamespace::NoteCutter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutter, "", "NoteCutter");
