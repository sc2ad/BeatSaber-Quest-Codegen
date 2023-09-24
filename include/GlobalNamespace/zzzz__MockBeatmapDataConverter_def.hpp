#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class MockObstacleData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class NoteData;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class MockNoteData;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace GlobalNamespace {
class GlobalNamespace__MockBeatmapDataConverter____c;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MockBeatmapDataConverter____c;
}
namespace GlobalNamespace {
class MockBeatmapDataConverter;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5270))
// CS Name: MockBeatmapDataConverter::<>c
class CORDL_TYPE GlobalNamespace__MockBeatmapDataConverter____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__MockBeatmapDataConverter____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MockBeatmapDataConverter____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MockBeatmapDataConverter____c(GlobalNamespace__MockBeatmapDataConverter____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MockBeatmapDataConverter____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MockBeatmapDataConverter____c(GlobalNamespace__MockBeatmapDataConverter____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MockBeatmapDataConverter____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MockBeatmapDataConverter____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MockBeatmapDataConverter____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MockBeatmapDataConverter____c& operator=(GlobalNamespace__MockBeatmapDataConverter____c&& o) noexcept = default;
  constexpr GlobalNamespace__MockBeatmapDataConverter____c& operator=(GlobalNamespace__MockBeatmapDataConverter____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__MockBeatmapDataConverter____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__MockBeatmapDataConverter____c value) ;

static GlobalNamespace::GlobalNamespace__MockBeatmapDataConverter____c __get___9() ;

static System::Func_2<GlobalNamespace::NoteData,bool> __declspec(property(get=__get___9__0_0, put=__set___9__0_0))  __9__0_0;

static void __set___9__0_0(System::Func_2<GlobalNamespace::NoteData,bool> value) ;

static System::Func_2<GlobalNamespace::NoteData,bool> __get___9__0_0() ;

static System::Func_2<GlobalNamespace::NoteData,GlobalNamespace::MockNoteData> __declspec(property(get=__get___9__0_1, put=__set___9__0_1))  __9__0_1;

static void __set___9__0_1(System::Func_2<GlobalNamespace::NoteData,GlobalNamespace::MockNoteData> value) ;

static System::Func_2<GlobalNamespace::NoteData,GlobalNamespace::MockNoteData> __get___9__0_1() ;

static System::Func_2<GlobalNamespace::NoteData,bool> __declspec(property(get=__get___9__0_2, put=__set___9__0_2))  __9__0_2;

static void __set___9__0_2(System::Func_2<GlobalNamespace::NoteData,bool> value) ;

static System::Func_2<GlobalNamespace::NoteData,bool> __get___9__0_2() ;

static System::Func_2<GlobalNamespace::NoteData,GlobalNamespace::MockNoteData> __declspec(property(get=__get___9__0_3, put=__set___9__0_3))  __9__0_3;

static void __set___9__0_3(System::Func_2<GlobalNamespace::NoteData,GlobalNamespace::MockNoteData> value) ;

static System::Func_2<GlobalNamespace::NoteData,GlobalNamespace::MockNoteData> __get___9__0_3() ;

static System::Func_2<GlobalNamespace::NoteData,bool> __declspec(property(get=__get___9__0_4, put=__set___9__0_4))  __9__0_4;

static void __set___9__0_4(System::Func_2<GlobalNamespace::NoteData,bool> value) ;

static System::Func_2<GlobalNamespace::NoteData,bool> __get___9__0_4() ;

static System::Func_2<GlobalNamespace::NoteData,GlobalNamespace::MockNoteData> __declspec(property(get=__get___9__0_5, put=__set___9__0_5))  __9__0_5;

static void __set___9__0_5(System::Func_2<GlobalNamespace::NoteData,GlobalNamespace::MockNoteData> value) ;

static System::Func_2<GlobalNamespace::NoteData,GlobalNamespace::MockNoteData> __get___9__0_5() ;

static System::Func_2<GlobalNamespace::ObstacleData,GlobalNamespace::MockObstacleData> __declspec(property(get=__get___9__0_6, put=__set___9__0_6))  __9__0_6;

static void __set___9__0_6(System::Func_2<GlobalNamespace::ObstacleData,GlobalNamespace::MockObstacleData> value) ;

static System::Func_2<GlobalNamespace::ObstacleData,GlobalNamespace::MockObstacleData> __get___9__0_6() ;


// Methods

static GlobalNamespace::GlobalNamespace__MockBeatmapDataConverter____c New_ctor() ;

/// @brief Method .ctor addr 0x20ea628 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToMockBeatmapData>b__0_0 addr 0x20ea630 size 0x20 virtual false final false
 bool _ToMockBeatmapData_b__0_0(GlobalNamespace::NoteData nd) ;

/// @brief Method <ToMockBeatmapData>b__0_1 addr 0x20ea650 size 0x8 virtual false final false
 GlobalNamespace::MockNoteData _ToMockBeatmapData_b__0_1(GlobalNamespace::NoteData nd) ;

/// @brief Method <ToMockBeatmapData>b__0_2 addr 0x20ea658 size 0x20 virtual false final false
 bool _ToMockBeatmapData_b__0_2(GlobalNamespace::NoteData nd) ;

/// @brief Method <ToMockBeatmapData>b__0_3 addr 0x20ea678 size 0x8 virtual false final false
 GlobalNamespace::MockNoteData _ToMockBeatmapData_b__0_3(GlobalNamespace::NoteData nd) ;

/// @brief Method <ToMockBeatmapData>b__0_4 addr 0x20ea680 size 0x20 virtual false final false
 bool _ToMockBeatmapData_b__0_4(GlobalNamespace::NoteData nd) ;

/// @brief Method <ToMockBeatmapData>b__0_5 addr 0x20ea6a0 size 0x8 virtual false final false
 GlobalNamespace::MockNoteData _ToMockBeatmapData_b__0_5(GlobalNamespace::NoteData nd) ;

/// @brief Method <ToMockBeatmapData>b__0_6 addr 0x20ea6a8 size 0x8 virtual false final false
 GlobalNamespace::MockObstacleData _ToMockBeatmapData_b__0_6(GlobalNamespace::ObstacleData od) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MockBeatmapDataConverter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5271))
// CS Name: MockBeatmapDataConverter
class CORDL_TYPE MockBeatmapDataConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__MockBeatmapDataConverter____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MockBeatmapDataConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapDataConverter", modifiers: " const&", def_value: None }]
constexpr MockBeatmapDataConverter(MockBeatmapDataConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapDataConverter", modifiers: "&&", def_value: None }]
constexpr MockBeatmapDataConverter(MockBeatmapDataConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockBeatmapDataConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockBeatmapDataConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockBeatmapDataConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockBeatmapDataConverter& operator=(MockBeatmapDataConverter&& o) noexcept = default;
  constexpr MockBeatmapDataConverter& operator=(MockBeatmapDataConverter const& o) noexcept = default;
                


// Methods

/// @brief Method ToMockBeatmapData addr 0x20e9bd8 size 0x8f4 virtual false final false
static GlobalNamespace::MockBeatmapData ToMockBeatmapData(GlobalNamespace::IReadonlyBeatmapData beatmapData) ;

/// @brief Method ToMockNoteData addr 0x20ea4cc size 0x84 virtual false final false
static GlobalNamespace::MockNoteData ToMockNoteData(GlobalNamespace::NoteData noteData) ;

/// @brief Method ToMockObstacleData addr 0x20ea550 size 0x74 virtual false final false
static GlobalNamespace::MockObstacleData ToMockObstacleData(GlobalNamespace::ObstacleData obstacleData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MockBeatmapDataConverter____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MockBeatmapDataConverter____c, "", "MockBeatmapDataConverter/<>c");
NEED_NO_BOX(GlobalNamespace::MockBeatmapDataConverter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockBeatmapDataConverter, "", "MockBeatmapDataConverter");
