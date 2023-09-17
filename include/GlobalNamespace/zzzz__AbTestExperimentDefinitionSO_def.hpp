#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__AbTestExperimentDefinitionSO__Group;
}
namespace GlobalNamespace {
class AbTestExperimentDefinitionSO;
}
// Type: ::Group
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5905))
// CS Name: AbTestExperimentDefinitionSO::Group
struct CORDL_TYPE ____GlobalNamespace__AbTestExperimentDefinitionSO__Group : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AbTestExperimentDefinitionSO__Group(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__AbTestExperimentDefinitionSO__Group(____GlobalNamespace__AbTestExperimentDefinitionSO__Group const&) = default;
                    constexpr ____GlobalNamespace__AbTestExperimentDefinitionSO__Group(____GlobalNamespace__AbTestExperimentDefinitionSO__Group&&) = default;
                    constexpr ____GlobalNamespace__AbTestExperimentDefinitionSO__Group& operator=(____GlobalNamespace__AbTestExperimentDefinitionSO__Group const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AbTestExperimentDefinitionSO__Group& operator=(____GlobalNamespace__AbTestExperimentDefinitionSO__Group&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AbTestExperimentDefinitionSO__Group(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__AbTestExperimentDefinitionSO__Group_Unwrapped : int32_t {
__Control = 0,
__Test1 = 1,
__Test2 = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__AbTestExperimentDefinitionSO__Group_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__AbTestExperimentDefinitionSO__Group_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Control offset 0
static ::GlobalNamespace::____GlobalNamespace__AbTestExperimentDefinitionSO__Group const Control;

/// @brief Field Test1 offset 0
static ::GlobalNamespace::____GlobalNamespace__AbTestExperimentDefinitionSO__Group const Test1;

/// @brief Field Test2 offset 0
static ::GlobalNamespace::____GlobalNamespace__AbTestExperimentDefinitionSO__Group const Test2;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AbTestExperimentDefinitionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5906))
// CS Name: AbTestExperimentDefinitionSO
class CORDL_TYPE AbTestExperimentDefinitionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using Group = ::GlobalNamespace::____GlobalNamespace__AbTestExperimentDefinitionSO__Group;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AbTestExperimentDefinitionSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbTestExperimentDefinitionSO", modifiers: " const&", def_value: None }]
constexpr AbTestExperimentDefinitionSO(AbTestExperimentDefinitionSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbTestExperimentDefinitionSO", modifiers: "&&", def_value: None }]
constexpr AbTestExperimentDefinitionSO(AbTestExperimentDefinitionSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbTestExperimentDefinitionSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr AbTestExperimentDefinitionSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbTestExperimentDefinitionSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbTestExperimentDefinitionSO& operator=(AbTestExperimentDefinitionSO&& o) noexcept = default;
  constexpr AbTestExperimentDefinitionSO& operator=(AbTestExperimentDefinitionSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__experimentName, put=__set__experimentName))  _experimentName;

constexpr void __set__experimentName(::StringW value) ;

constexpr ::StringW __get__experimentName() const;

 float_t __declspec(property(get=__get__test1GroupSize, put=__set__test1GroupSize))  _test1GroupSize;

constexpr void __set__test1GroupSize(float_t value) ;

constexpr float_t __get__test1GroupSize() const;

 float_t __declspec(property(get=__get__test2GroupSize, put=__set__test2GroupSize))  _test2GroupSize;

constexpr void __set__test2GroupSize(float_t value) ;

constexpr float_t __get__test2GroupSize() const;

 float_t __declspec(property(get=__get__controlGroupSize, put=__set__controlGroupSize))  _controlGroupSize;

constexpr void __set__controlGroupSize(float_t value) ;

constexpr float_t __get__controlGroupSize() const;

 ::StringW __declspec(property(get=__get__salt, put=__set__salt))  _salt;

constexpr void __set__salt(::StringW value) ;

constexpr ::StringW __get__salt() const;

 ::GlobalNamespace::____GlobalNamespace__AbTestExperimentDefinitionSO__Group __declspec(property(get=__get__currentUserTreatmentGroup, put=__set__currentUserTreatmentGroup))  _currentUserTreatmentGroup;

constexpr void __set__currentUserTreatmentGroup(::GlobalNamespace::____GlobalNamespace__AbTestExperimentDefinitionSO__Group value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__AbTestExperimentDefinitionSO__Group __get__currentUserTreatmentGroup() const;


// Properties

 float_t __declspec(property(get=get_test1GroupSize))  test1GroupSize;

 float_t __declspec(property(get=get_test2GroupSize))  test2GroupSize;

 ::StringW __declspec(property(get=get_experimentName))  experimentName;

 ::GlobalNamespace::____GlobalNamespace__AbTestExperimentDefinitionSO__Group __declspec(property(get=get_currentUserTreatmentGroup))  currentUserTreatmentGroup;


// Methods

/// @brief Method get_test1GroupSize addr 0x21909b4 size 0x8 virtual false final false
 float_t get_test1GroupSize() ;

/// @brief Method get_test2GroupSize addr 0x21909bc size 0x8 virtual false final false
 float_t get_test2GroupSize() ;

/// @brief Method get_experimentName addr 0x21909c4 size 0x8 virtual false final false
 ::StringW get_experimentName() ;

/// @brief Method get_currentUserTreatmentGroup addr 0x21909cc size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__AbTestExperimentDefinitionSO__Group get_currentUserTreatmentGroup() ;

/// @brief Method OnValidate addr 0x21909d4 size 0x2c virtual false final false
 void OnValidate() ;

/// @brief Method ComputeCurrentUserTreatment addr 0x2190a00 size 0x18 virtual false final false
 void ComputeCurrentUserTreatment(::StringW userId) ;

/// @brief Method ForceSetTreatmentGroup addr 0x2190ca0 size 0x8 virtual false final false
 void ForceSetTreatmentGroup(::GlobalNamespace::____GlobalNamespace__AbTestExperimentDefinitionSO__Group group) ;

/// @brief Method AbSplit addr 0x2190a18 size 0x288 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__AbTestExperimentDefinitionSO__Group AbSplit(::StringW userId) ;

// Ctor Parameters []
explicit AbTestExperimentDefinitionSO() ;

/// @brief Method .ctor addr 0x2190ca8 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AbTestExperimentDefinitionSO__Group, "", "AbTestExperimentDefinitionSO/Group");
NEED_NO_BOX(::GlobalNamespace::AbTestExperimentDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AbTestExperimentDefinitionSO, "", "AbTestExperimentDefinitionSO");
